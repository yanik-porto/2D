----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:40:14 11/09/2016 
-- Design Name: 
-- Module Name:    d_ff - d_ff_arch 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity d_ff is --  flip flop
generic (BUS_WIDTH: integer := 8);
    Port ( R : in  STD_LOGIC; -- reset 
           D : in  STD_LOGIC_VECTOR (BUS_WIDTH - 1 downto 0); --input
           Q : out  STD_LOGIC_VECTOR (BUS_WIDTH - 1 downto 0); -- output
           CLK : in  STD_LOGIC; -- clock
           E : in  STD_LOGIC); --enabble button
end d_ff;

architecture d_ff_arch of d_ff is

signal temp : STD_LOGIC_VECTOR (BUS_WIDTH - 1 downto 0) := (others => '0'); --temporary signal in order to affect the output 

begin

process(CLK, R)
begin

-- if reset is on, erase output
if(R='1') then
	temp <= (others=>'0');
-- if clock in rising edge and enable is on, push input to the temporary signal
elsif(CLK'event and CLK = '1')then
		if(E = '1') then
			temp <= D;
		end if;
end if;
end process;

-- push the temporary signal to the output
Q <= temp;

end d_ff_arch;

