cmd_drivers/parport/parport.ko := ld -r -m elf_x86_64 -T /home/gunner/Documents/linux-3.14.70/scripts/module-common.lds --build-id  -o drivers/parport/parport.ko drivers/parport/parport.o drivers/parport/parport.mod.o