library ieee;
use ieee.std_logic_1164.all;
use std.textio.all;
use ieee.std_logic_textio.all;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY read_lena_tb IS
END read_lena_tb;
 
ARCHITECTURE behavior OF read_lena_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT d_ff
    PORT(
         R : IN  std_logic;
         D : IN  std_logic_vector(7 downto 0);
         Q : OUT  std_logic_vector(7 downto 0);
         CLK : IN  std_logic;
         E : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal R : std_logic := '0';
   signal D : std_logic_vector(7 downto 0) := (others => '0');
   signal CLK : std_logic := '0';
   signal E : std_logic := '0';

 	--Outputs
   signal Q : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: d_ff PORT MAP (
          R => R,
          D => D,
          Q => Q,
          CLK => CLK,
          E => E
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   FILE data : text;
   variable sample : line;
   variable pxl1 :std_logic_vector (7 downto 0);
	
   begin

	file_open (data,"Lena128x128g_8bits.dat", read_mode);	
	
	while not endfile(data) loop
      readline (data,sample);
      read (sample,pxl1);
		
      -- hold reset state for 100 ns.
      D <= pxl1;
      wait for CLK_period*10;
		
      wait for CLK_period*10;

      -- insert stimulus here 

		end loop;
      file_close (data);
      wait;
   end process;

END;
