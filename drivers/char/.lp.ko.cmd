cmd_drivers/char/lp.ko := ld -r -m elf_x86_64 -T /home/gunner/Documents/linux-3.14.70/scripts/module-common.lds --build-id  -o drivers/char/lp.ko drivers/char/lp.o drivers/char/lp.mod.o
