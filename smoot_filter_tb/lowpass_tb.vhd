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
         CLK_i : IN  std_logic
			--start_process : IN std_logic;
        );
    END COMPONENT;
    

   --Inputs
   signal D_i : std_logic_vector(7 downto 0) := (others => '0');
   signal R_i : std_logic := '0';
   signal CLK_i : std_logic := '0';
	--signal start_process : std_logic := '0';

 	--Outputs
   signal Q_i : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant CLK_i_period : time := 10 ns;
	
	signal I1 : std_logic_vector(7 downto 0) := (others => '0');
	signal counter : integer:=0;
	signal counter_end : integer:=0;
	signal thresh: integer:=0;
	signal blurred : std_logic_vector(7 downto 0);
	signal flag: STD_LOGIC:= '0';
	signal flag_endfile: STD_LOGIC:= '0';
	signal flag_write: STD_LOGIC:= '0';
	
	signal dataread: std_logic_vector (7 downto 0):= (others => '0');
 
BEGIN

	thresh <= 9;
 
	-- Instantiate the Unit Under Test (UUT)
   uut: lowpass_filter PORT MAP (
          D_i => D_i,
          Q_i => Q_i,
          R_i => R_i,
          CLK_i => CLK_i
			 --start_process => start_process
        );

   -- Clock process definitions
   CLK_i_process :process
   begin
		CLK_i <= '0';
		wait for CLK_i_period/2;
		CLK_i <= '1';
		wait for CLK_i_period/2;
   end process    CLK_i_process;
 

   -- Reading process
   reading: process(CLK_i)
	
	FILE data : text is in "Lena128x128g_8bits.dat";
   variable sample : line;
	variable I1_var: std_logic_vector (7 downto 0);
	
   begin		
	
	
		
	 if   CLK_i'event and CLK_i = '1' then 
	 
	 -- file_open (data,"Lena128x128g_8bits.dat", read_mode);
	 
	--	wait until CLK_i = '1' and CLK_i'event;
	--	while not endfile(data) loop
	if (not endfile(data)) then
			readline (data, sample);
			read(sample, I1_var);
			
			I1 <= I1_var;
			
			if (counter > thresh) then
				flag <= '1';
				dataread <= blurred;
			end if;
				
			counter <= counter + 1;
	else
		
		--if (endfile(data)) then
			flag_endfile <= '1';
			-- file_close (data);
	end if;
	end if ;
      
   end process reading;
	
	
	-- Writing process
	writing: process(CLK_i)
	
	FILE data2 : text;
   variable sample2 : line;
	
	begin	
		if CLK_i'event and CLK_i = '0' then 
		
			if(flag_endfile = '0' and flag = '1') then
				if(flag_write = '0') then 
					file_open (data2, "blurred_lena.dat", write_mode);
					flag_write <= '1';
				end if;
				write (sample2, dataread, right, 8);
				writeline (data2, sample2);
			else 
				null;
			end if;

			if(flag_endfile = '1') then 
				counter_end <= counter_end + 1;
				if(counter_end > thresh) then
					flag_write <= '0';
				end if;
				
				if(flag_write = '0') then
					file_close (data2);
				end if;
				
				write (sample2, dataread, right, 8);
				writeline (data2, sample2);
				
			end if;		
		end if;
	end process writing;
	
	-- Component instantiation
	lp_filter : lowpass_filter PORT MAP ( D_i => I1, Q_i => blurred , R_i => '0', CLK_i => CLK_i);-- start_process => flag);

END;
