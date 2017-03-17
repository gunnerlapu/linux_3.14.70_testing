cmd_sound/core/snd.ko := ld -r -m elf_x86_64 -T /home/gunner/Documents/linux-3.14.70/scripts/module-common.lds --build-id  -o sound/core/snd.ko sound/core/snd.o sound/core/snd.mod.o
