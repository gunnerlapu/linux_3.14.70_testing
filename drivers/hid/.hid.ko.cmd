cmd_drivers/hid/hid.ko := ld -r -m elf_x86_64 -T /home/gunner/Documents/linux-3.14.70/scripts/module-common.lds --build-id  -o drivers/hid/hid.ko drivers/hid/hid.o drivers/hid/hid.mod.o
