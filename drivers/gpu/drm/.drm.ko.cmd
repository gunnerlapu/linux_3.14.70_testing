cmd_drivers/gpu/drm/drm.ko := ld -r -m elf_x86_64 -T /home/gunner/Documents/linux-3.14.70/scripts/module-common.lds --build-id  -o drivers/gpu/drm/drm.ko drivers/gpu/drm/drm.o drivers/gpu/drm/drm.mod.o
