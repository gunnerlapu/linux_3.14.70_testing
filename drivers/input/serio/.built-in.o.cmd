cmd_drivers/input/serio/built-in.o :=  ld -m elf_x86_64   -r -o drivers/input/serio/built-in.o drivers/input/serio/serio.o drivers/input/serio/i8042.o drivers/input/serio/libps2.o 
