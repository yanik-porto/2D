--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:47:21 11/23/2016
-- Design Name:   
-- Module Name:   C:/Users/yport/Documents/VIBOT/S3/UE3 - RTIC/RTIC - Dubois/smoot_filter_tb/lowpass_tb.vhd
-- Project Name:  smoot_filter_tb
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: lowpass_filter
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
library ieee;
use ieee.std_logic_1164.all;
use std.textio.all;
use ieee.std_logic_textio.all;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY lowpass_tb IS
END lowpass_tb;
 
ARCHITECTURE behavior OF lowpass_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT lowpass_filter
    PORT(
         D_i : IN  std_logic_vector(7 downto 0);
         Q_i : OUT  std_logic_vector(7 downto 0);
         R_i : IN  std_logic;
         CLK_i : IN  std_logic;
			start_process : IN std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal D_i : std_logic_vector(7 downto 0) := (others => '0');
   signal R_i : std_logic := '0';
   signal CLK_i : std_logic := '0';
	signal start_process : std_logic := '0';

 	--Outputs
   signal Q_i : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant CLK_i_period : time := 10 ns;
	
	signal I1 : std_logic_vector(7 downto 0) := (others => '0');
	signal counter : integer:=0;
	signal counter_end : integer:=0;
	signal thresh: integer:=0;
	signal modulo_op : integer:=0;
	signal blurred : std_logic_vector(7 downto 0);
	signal flag: STD_LOGIC:= '0';
	signal flag_endfile: STD_LOGIC:= '0';
	signal flag_write: STD_LOGIC:= '0';
	
	signal dataread: std_logic_vector (7 downto 0):= (others => '0');
 
	type LISTE_ETAT is (STOP, INIT, START, END_READ, STOP_WRITE);
	signal ETATG : LISTE_ETAT;
	
BEGIN

	thresh <= 128+9;
 
	-- Instantiate the Unit Under Test (UUT)
   uut: lowpass_filter PORT MAP (
          D_i => D_i,
          Q_i => Q_i,
          R_i => R_i,
          CLK_i => CLK_i,
			 start_process => start_process
        );

	

   -- Clock process definitions
   CLK_i_process :process
   begin
		CLK_i <= '0';
		wait for CLK_i_period/2;
		CLK_i <= '1';
		wait for CLK_i_period/2;
   end process    CLK_i_process;
 
 
	state_machine: process(CLK_i, R_i)
	begin
		if (R_i = '1') then
			ETATG <= STOP;
		elsif (CLK_i'event and CLK_i = '1') then
			case ETATG is
				when STOP =>
					if (R_i = '0') then
						ETATG <= INIT;
					end if;
				when INIT => 
					if (counter > thresh) then
						ETATG <= START;
					end if;
				when START =>
					if (flag_endfile = '1') then
						ETATG <= END_READ;
					end if;
				when END_READ => 
					if (counter_end > thresh) then
						ETATG <= STOP_WRITE;
					end if;
				when STOP_WRITE => 
				
				when others =>
					ETATG <= STOP;
			end case;
		end if;
	end process state_machine;



   -- Reading process
   reading: process(CLK_i, ETATG)
	
	FILE data : text is in "Lena128x128g_8bits.dat";
   variable sample : line;
	variable I1_var: std_logic_vector (7 downto 0);
	
   begin

	case ETATG is
	 when STOP =>
	 
	 when INIT =>
		if (CLK_i'event and CLK_i = '1') then 
			readline (data, sample);
			read(sample, I1_var);					
			I1 <= I1_var;
			counter <= counter + 1; 
		end if;
		
	 when START =>
		if (CLK_i'event and CLK_i = '1') then 
			if (not endfile(data)) then
				readline (data, sample);
				read(sample, I1_var);			
				I1 <= I1_var;
				if (counter <= 128+thresh) then
					dataread <= x"00";
				elsif (counter > 128+thresh and counter <= 16256+thresh) then
					modulo_op <= (counter-thresh) mod (128);
					if (((counter-thresh) mod (128) = 0) or ((counter-thresh-1) mod (128) = 0)) then 
						dataread <= x"00";
					else	dataread <= blurred;
					end if;
				elsif (counter > 16256+thresh) then 
					dataread <= x"00";
				end if;
				counter <= counter + 1;
			else
				flag_endfile <= '1';
			end if;
		end if;
		
		when END_READ => 
			if (CLK_i'event and CLK_i = '1') then 
				if(counter < 16256 + thresh - 2) then -- -2 for the last borders
					dataread <= blurred;
				else dataread <= x"00";
				end if;
				counter <= counter + 1;
			end if;
	
	 when others =>
	 
	end case;
   end process reading;
	
	
	-- Writing process
	writing: process(CLK_i, ETATG)
	
	FILE data2 : text;
   variable sample2 : line;
	
	begin	
	
	case ETATG is
		when STOP =>
		
		when INIT => 
		
		when START =>
			if (CLK_i'event and CLK_i = '0') then
				flag <= '1';
				if(flag_write = '0') then 
					file_open (data2, "blurred_lena.dat", write_mode);
					flag_write <= '1';
				end if;
				write (sample2, dataread, right, 8);
				writeline (data2, sample2);
			end if;
			
		when END_READ =>
			if (CLK_i'event and CLK_i = '0') then 
				write (sample2, dataread, right, 8);
				writeline (data2, sample2);
				counter_end <= counter_end + 1;
			end if;
			
		when STOP_WRITE =>
			file_close (data2);
			flag_write <= '0';
			flag <= '0';
		when others =>
		
	end case;

	end process writing;
	
	-- Component instantiation
	lp_filter : lowpass_filter PORT MAP ( D_i => I1, Q_i => blurred , R_i => '0', CLK_i => CLK_i, start_process => flag);

END;
