cmd_drivers/power/built-in.o :=  ld -m elf_x86_64   -r -o drivers/power/built-in.o drivers/power/power_supply.o drivers/power/charger-manager.o drivers/power/avs/built-in.o drivers/power/reset/built-in.o 
