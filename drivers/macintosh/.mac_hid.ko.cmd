cmd_drivers/macintosh/mac_hid.ko := ld -r -m elf_x86_64 -T /home/gunner/Documents/linux-3.14.70/scripts/module-common.lds --build-id  -o drivers/macintosh/mac_hid.ko drivers/macintosh/mac_hid.o drivers/macintosh/mac_hid.mod.o