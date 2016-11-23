----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:54:31 11/16/2016 
-- Design Name: 
-- Module Name:    lowpass_filter - lowpass_filter_arch 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_unsigned.all;
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

-- Declaration of the input and output ports of the entity
entity lowpass_filter is
    Port ( D_i : in  STD_LOGIC_VECTOR (7 downto 0);
           Q_i : out  STD_LOGIC_VECTOR (7 downto 0);
			  R_i : IN  std_logic;
			  CLK_i : IN  std_logic
			  );
end lowpass_filter;


architecture lowpass_filter_arch of lowpass_filter is

-- header of used components
component d_ff is
generic (BUS_WIDTH: integer := 8);
    Port ( R : in  STD_LOGIC;
           D : in  STD_LOGIC_VECTOR (BUS_WIDTH - 1 downto 0);
           Q : out  STD_LOGIC_VECTOR (BUS_WIDTH - 1 downto 0);
           CLK : in  STD_LOGIC;
           E : in  STD_LOGIC
			  );
end component;
	 
component fifo
  PORT (
	 clk : IN STD_LOGIC;
	 rst : IN STD_LOGIC;
	 din : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
	 wr_en : IN STD_LOGIC;
    rd_en : IN STD_LOGIC;
	 prog_full_thresh : IN STD_LOGIC_VECTOR(6 DOWNTO 0);
	 dout : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
	 full : OUT STD_LOGIC;
	 empty : OUT STD_LOGIC;
	 prog_full : OUT STD_LOGIC
  );
end component;

component lowpass_processing
    Port ( CLK : in  STD_LOGIC;
           d_ff_1 : in  STD_LOGIC_VECTOR (7 downto 0);
           d_ff_2 : in  STD_LOGIC_VECTOR (7 downto 0);
           d_ff_3 : in  STD_LOGIC_VECTOR (7 downto 0);
           d_ff_4 : in  STD_LOGIC_VECTOR (7 downto 0);
           d_ff_5 : in  STD_LOGIC_VECTOR (7 downto 0);
           d_ff_6 : in  STD_LOGIC_VECTOR (7 downto 0);
           d_ff_7 : in  STD_LOGIC_VECTOR (7 downto 0);
           d_ff_8 : in  STD_LOGIC_VECTOR (7 downto 0);
           d_ff_9 : in  STD_LOGIC_VECTOR (7 downto 0);
           Q : out  STD_LOGIC_VECTOR (7 downto 0):= (others => '0') 
			  );
end component;

-- temporary signal after flip-flops
signal temp1: STD_LOGIC_VECTOR (7 downto 0);
signal temp2: STD_LOGIC_VECTOR (7 downto 0);
signal temp3: STD_LOGIC_VECTOR (7 downto 0);
signal temp4: STD_LOGIC_VECTOR (7 downto 0);
signal temp5: STD_LOGIC_VECTOR (7 downto 0);
signal temp6: STD_LOGIC_VECTOR (7 downto 0);
signal temp7: STD_LOGIC_VECTOR (7 downto 0);
signal temp8: STD_LOGIC_VECTOR (7 downto 0);
signal temp9: STD_LOGIC_VECTOR (7 downto 0);

-- temporary signal after fifo
signal buffer1: STD_LOGIC_VECTOR (7 downto 0);
signal buffer2: STD_LOGIC_VECTOR (7 downto 0);

-- input of filter
signal input_1: STD_LOGIC_VECTOR (7 downto 0);
signal input_2: STD_LOGIC_VECTOR (7 downto 0);
signal input_3: STD_LOGIC_VECTOR (7 downto 0);
signal input_4: STD_LOGIC_VECTOR (7 downto 0);
signal input_5: STD_LOGIC_VECTOR (7 downto 0);
signal input_6: STD_LOGIC_VECTOR (7 downto 0);
signal input_7: STD_LOGIC_VECTOR (7 downto 0);
signal input_8: STD_LOGIC_VECTOR (7 downto 0);
signal input_9: STD_LOGIC_VECTOR (7 downto 0);

-- output of filter
signal output: STD_LOGIC_VECTOR (7 downto 0);
 
-- flag if all 9 pixels read
signal flag: STD_LOGIC:= '0';

-- signals for fifo
signal rd_en_1: STD_LOGIC;
signal rd_en_2: STD_LOGIC; 
signal prog_full_1 : STD_LOGIC;
signal prog_full_2 : STD_LOGIC;
-- signal wr_en_1: STD_LOGIC;
-- signal wr_en_2: STD_LOGIC;
-- signal rst_1 : STD_LOGIC;
-- signal rst_2 : STD_LOGIC;
signal empty_1 : STD_LOGIC;
signal empty_2 : STD_LOGIC;
signal full_1 : STD_LOGIC;
signal full_2 : STD_LOGIC;
signal prog_full_thresh_fifo : STD_LOGIC_VECTOR(6 DOWNTO 0);

begin

-- Map ports of the entity to ports of the instantiated components
d_ff_1 : d_ff generic map (8) PORT MAP (R => R_i, D => D_i, Q => temp1, CLK => CLK_i, E => '1'); 
d_ff_2 : d_ff generic map (8) PORT MAP (R => R_i, D => temp1, Q => temp2, CLK => CLK_i, E => '1');
d_ff_3 : d_ff generic map (8) PORT MAP (R => R_i, D => temp2, Q => temp3, CLK => CLK_i, E => '1');  

fifo_1 : fifo PORT MAP (clk => CLK_i, rst => '0', din => temp3, wr_en => '1', rd_en => rd_en_1,
								prog_full_thresh => prog_full_thresh_fifo, dout => buffer1, full => full_1,
								empty => empty_1, prog_full => prog_full_1);
								
d_ff_4 : d_ff generic map (8) PORT MAP (R => R_i, D => buffer1, Q => temp4, CLK => CLK_i, E => '1'); 
d_ff_5 : d_ff generic map (8) PORT MAP (R => R_i, D => temp4, Q => temp5, CLK => CLK_i, E => '1');
d_ff_6 : d_ff generic map (8) PORT MAP (R => R_i, D => temp5, Q => temp6, CLK => CLK_i, E => '1');  

fifo_2 : fifo PORT MAP (clk => CLK_i, rst => '0', din => temp6, wr_en => '1', rd_en => rd_en_2,
								prog_full_thresh => prog_full_thresh_fifo, dout => buffer2, full => full_2,
								empty => empty_2, prog_full => prog_full_2);
								
d_ff_7 : d_ff generic map (8) PORT MAP (R => R_i, D => buffer2, Q => temp7, CLK => CLK_i, E => '1'); 
d_ff_8 : d_ff generic map (8) PORT MAP (R => R_i, D => temp7, Q => temp8, CLK => CLK_i, E => '1');
d_ff_9 : d_ff generic map (8) PORT MAP (R => R_i, D => temp8, Q => temp9, CLK => CLK_i, E => '1'); 

filter : lowpass_processing PORT MAP (CLK => CLK_i, d_ff_1 => input_1, d_ff_2 => input_2, d_ff_3 => input_3,
													d_ff_4 => input_4, d_ff_5 => input_5, d_ff_6 => input_6, 
													d_ff_7 => input_7, d_ff_8 => input_8, d_ff_9 => input_9,
													Q => output);

-- set prog_full_thresh and map the prog_full to the read enable of the fifo													
prog_full_thresh_fifo <= "1111011";
rd_en_1 <= prog_full_1;
rd_en_2 <= prog_full_2;

cache_mem: process(CLK_i)

begin 

	if(CLK_i'event and CLK_i = '1') then
		if (temp9 /= 0) then flag <= '1';
		end if;
		-- Send flip flops output to the lowpass filter processing
		if (flag = '1') then 
			input_1 <= temp1;
			input_2 <= temp2;
			input_3 <= temp3;
			input_4 <= temp4;
			input_5 <= temp5;
			input_6 <= temp6;
			input_7 <= temp7;
			input_8 <= temp8;
			input_9 <= temp9;
		else 
			input_1 <= x"00";
			input_2 <= x"00";
			input_3 <= x"00";
			input_4 <= x"00";
			input_5 <= x"00";
			input_6 <= x"00";
			input_7 <= x"00";
			input_8 <= x"00";
			input_9 <= x"00";
		end if;
	end if;
end process cache_mem;

-- Send output of the lowpass_processing to the general output
Q_i <= output;

end lowpass_filter_arch;

