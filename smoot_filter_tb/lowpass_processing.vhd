----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:02:28 11/19/2016 
-- Design Name: 
-- Module Name:    lowpass_processing - lowpass_processing_arch 
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
use ieee.std_logic_arith.all;
--use ieee.std_logic_unsigned.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

-- the processing

entity lowpass_processing is
    Port ( CLK : in  STD_LOGIC;
           d_ff_1 : in  STD_LOGIC_VECTOR (7 downto 0); -- we pass the temporary signala after the flip flop
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
end lowpass_processing;

architecture lowpass_processing_arch of lowpass_processing is

-- declare using the flip flop component
COMPONENT d_ff is
generic (BUS_WIDTH: integer := 8);
    Port ( R : in  STD_LOGIC;
           D : in  STD_LOGIC_VECTOR (BUS_WIDTH - 1 downto 0);
           Q : out  STD_LOGIC_VECTOR (BUS_WIDTH - 1 downto 0);
           CLK : in  STD_LOGIC;
           E : in  STD_LOGIC
			  );
end component;

-- All adder results
signal adder_1 : signed (15 downto 0);
signal adder_2 : signed (15 downto 0);
signal adder_3 : signed (15 downto 0);
signal adder_4 : signed (15 downto 0);
signal adder_5 : signed (15 downto 0);
signal adder_6 : signed (15 downto 0);
signal adder_7 : signed (15 downto 0);
signal adder_8 : signed (15 downto 0);

--signal adder_1 : STD_LOGIC_VECTOR (12 downto 0);
--signal adder_2 : STD_LOGIC_VECTOR (12 downto 0);
--signal adder_3 : STD_LOGIC_VECTOR (12 downto 0);
--signal adder_4 : STD_LOGIC_VECTOR (12 downto 0);
--signal adder_5 : STD_LOGIC_VECTOR (12 downto 0);
--signal adder_6 : STD_LOGIC_VECTOR (12 downto 0);
--signal adder_7 : STD_LOGIC_VECTOR (12 downto 0);
--signal adder_8 : STD_LOGIC_VECTOR (12 downto 0);

-- Pixels value
signal pxl_1 : signed (12 downto 0);
signal pxl_2 : signed (12 downto 0);
signal pxl_3 : signed (12 downto 0);
signal pxl_4 : signed (12 downto 0);
signal pxl_5 : signed (12 downto 0);
signal pxl_6 : signed (12 downto 0);
signal pxl_7 : signed (12 downto 0);
signal pxl_8 : signed (12 downto 0);
signal pxl_9 : signed (12 downto 0);

--signal pxl_1 : STD_LOGIC_VECTOR (12 downto 0);
--signal pxl_2 : STD_LOGIC_VECTOR (12 downto 0);
--signal pxl_3 : STD_LOGIC_VECTOR (12 downto 0);
--signal pxl_4 : STD_LOGIC_VECTOR (12 downto 0);
--signal pxl_5 : STD_LOGIC_VECTOR (12 downto 0);
--signal pxl_6 : STD_LOGIC_VECTOR (12 downto 0);
--signal pxl_7 : STD_LOGIC_VECTOR (12 downto 0);
--signal pxl_8 : STD_LOGIC_VECTOR (12 downto 0);
--signal pxl_9 : STD_LOGIC_VECTOR (12 downto 0);

-- pxl 9 stored after each flip flop 
signal pxl_9_temp1 : STD_LOGIC_VECTOR (12 downto 0);
signal pxl_9_temp2 : STD_LOGIC_VECTOR (12 downto 0);
signal pxl_9_temp3 : STD_LOGIC_VECTOR (12 downto 0);

signal toto : STD_LOGIC_VECTOR (12 downto 0);

signal bit_extend : signed (3 downto 0) := x"1";

begin

toto <= conv_std_logic_vector(pxl_9, pxl_9'length);
-- map 9th pixel to first ff and pass it to the other ones
--port map( plug the input ofyour component to an alrady existing signal)
d_ff_temp1 : d_ff generic map (13) PORT MAP (R => '0', D => toto, Q => pxl_9_temp1, CLK => CLK, E => '1');
--d_ff_temp1 : d_ff generic map (13) PORT MAP (R => '0', D => pxl_9, Q => pxl_9_temp1, CLK => CLK, E => '1');
d_ff_temp2 : d_ff generic map (13) PORT MAP (R => '0', D => pxl_9_temp1, Q => pxl_9_temp2, CLK => CLK, E => '1');
d_ff_temp3 : d_ff generic map (13) PORT MAP (R => '0', D => pxl_9_temp2, Q => pxl_9_temp3, CLK => CLK, E => '1');

addition: process(CLK)

begin

	if(CLK'event and CLK = '1') then

		pxl_1 <= signed('0' & d_ff_1) * bit_extend;
		pxl_2 <= signed('0' & d_ff_2) * bit_extend;
		pxl_3 <= signed('0' & d_ff_3) * bit_extend;
		pxl_4 <= signed('0' & d_ff_4) * bit_extend;
		pxl_5 <= signed('0' & d_ff_5) * bit_extend;
		pxl_6 <= signed('0' & d_ff_6) * bit_extend;
		pxl_7 <= signed('0' & d_ff_7) * bit_extend;
		pxl_8 <= signed('0' & d_ff_8) * bit_extend;
		pxl_9 <= signed('0' & d_ff_9) * bit_extend;

--		pxl_1 <= signed("000" & d_ff_1);
--		pxl_2 <= signed("000" & d_ff_2);
--		pxl_3 <= signed("000" & d_ff_3);
--		pxl_4 <= signed("000" & d_ff_4);
--		pxl_5 <= signed("000" & d_ff_5);
--		pxl_6 <= signed("000" & d_ff_6);
--		pxl_7 <= signed("000" & d_ff_7);
--		pxl_8 <= signed("000" & d_ff_8);
--		pxl_9 <= signed("000" & d_ff_9);
			
		-- First layer of adders
		adder_1 <= ((15 downto 13 => pxl_1(12)) & pxl_1) + ((15 downto 13 => pxl_2(12)) & pxl_2);
		adder_2 <= ((15 downto 13 => pxl_3(12)) & pxl_3) + ((15 downto 13 => pxl_4(12)) & pxl_4);
		adder_3 <= ((15 downto 13 => pxl_5(12)) & pxl_5) + ((15 downto 13 => pxl_6(12)) & pxl_6);
		adder_4 <= ((15 downto 13 => pxl_7(12)) & pxl_7) + ((15 downto 13 => pxl_8(12)) & pxl_8);

--		adder_1 <= ((11 downto 8 => pxl_1(7)) & pxl_1) + ((11 downto 8 => pxl_2(7)) & pxl_2);
--		adder_2 <= ((11 downto 8 => pxl_3(7)) & pxl_3) + ((11 downto 8 => pxl_4(7)) & pxl_4);
--		adder_3 <= ((11 downto 8 => pxl_5(7)) & pxl_5) + ((11 downto 8 => pxl_6(7)) & pxl_6);
--		adder_4 <= ((11 downto 8 => pxl_7(7)) & pxl_7) + ((11 downto 8 => pxl_8(7)) & pxl_8);

		-- Second layer of adders
		adder_5 <= adder_1 + adder_2;
		adder_6 <= adder_3 + adder_4;
		
		-- Third layer of adders
		adder_7 <= adder_5 + adder_6;
		
		-- Fourth layer of adders
		adder_8 <= abs(adder_7 + signed((15 downto 13 => pxl_9_temp3(12)) & pxl_9_temp3));
		-- adder_8 <= abs(adder_7 + ((12 downto 8 => pxl_9_temp3(7)) & pxl_9_temp3));
		
		-- Send the result of last adder to the output
		 Q <= conv_std_logic_vector(adder_8, adder_8'length)(10 downto 3);
		-- Q <= adder_8(10 downto 3);
	
	end if;
end process addition;

end lowpass_processing_arch;

