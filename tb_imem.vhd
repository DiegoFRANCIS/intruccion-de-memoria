
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY tb_imem IS
END tb_imem;
 
ARCHITECTURE behavior OF tb_imem IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT imem
    PORT(
         addr : IN  std_logic_vector(31 downto 0);
         rd : OUT  std_logic_vector(31 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal addr : std_logic_vector(31 downto 0) := (others => '0');

 	--Outputs
   signal rd : std_logic_vector(31 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: imem PORT MAP (
          addr => addr,
          rd => rd
        );

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

     addr <= x"00000001";
      -- insert stimulus here 

      wait;
   end process;

END;
