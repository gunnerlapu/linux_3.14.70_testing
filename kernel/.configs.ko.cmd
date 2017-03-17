cmd_kernel/configs.ko := ld -r -m elf_x86_64 -T /home/gunner/Documents/linux-3.14.70/scripts/module-common.lds --build-id  -o kernel/configs.ko kernel/configs.o kernel/configs.mod.o
