cmd_arch/x86/boot/compressed/cpuflags.o := gcc -Wp,-MD,arch/x86/boot/compressed/.cpuflags.o.d  -nostdinc -isystem /usr/lib/gcc/x86_64-linux-gnu/4.6/include -I/home/gunner/Documents/linux-3.14.70/arch/x86/include -Iarch/x86/include/generated  -Iinclude -I/home/gunner/Documents/linux-3.14.70/arch/x86/include/uapi -Iarch/x86/include/generated/uapi -I/home/gunner/Documents/linux-3.14.70/include/uapi -Iinclude/generated/uapi -include /home/gunner/Documents/linux-3.14.70/include/linux/kconfig.h -D__KERNEL__ -m64 -D__KERNEL__ -O2 -fno-strict-aliasing -fPIC -DDISABLE_BRANCH_PROFILING -mcmodel=small -mno-mmx -mno-sse -ffreestanding -fno-stack-protector    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(cpuflags)"  -D"KBUILD_MODNAME=KBUILD_STR(cpuflags)" -c -o arch/x86/boot/compressed/.tmp_cpuflags.o arch/x86/boot/compressed/cpuflags.c

source_arch/x86/boot/compressed/cpuflags.o := arch/x86/boot/compressed/cpuflags.c

deps_arch/x86/boot/compressed/cpuflags.o := \
    $(wildcard include/config/randomize/base.h) \

arch/x86/boot/compressed/cpuflags.o: $(deps_arch/x86/boot/compressed/cpuflags.o)

$(deps_arch/x86/boot/compressed/cpuflags.o):
