cmd_sound/ac97_bus.ko := ld -r -m elf_x86_64 -T /home/gunner/Documents/linux-3.14.70/scripts/module-common.lds --build-id  -o sound/ac97_bus.ko sound/ac97_bus.o sound/ac97_bus.mod.o
