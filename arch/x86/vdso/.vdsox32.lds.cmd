cmd_arch/x86/vdso/vdsox32.lds := gcc -E -Wp,-MD,arch/x86/vdso/.vdsox32.lds.d  -nostdinc -isystem /usr/lib/gcc/x86_64-linux-gnu/4.6/include -I/home/gunner/Documents/linux-3.14.70/arch/x86/include -Iarch/x86/include/generated  -Iinclude -I/home/gunner/Documents/linux-3.14.70/arch/x86/include/uapi -Iarch/x86/include/generated/uapi -I/home/gunner/Documents/linux-3.14.70/include/uapi -Iinclude/generated/uapi -include /home/gunner/Documents/linux-3.14.70/include/linux/kconfig.h -D__KERNEL__    -P -C -P -C -Ux86 -D__ASSEMBLY__ -DLINKER_SCRIPT -o arch/x86/vdso/vdsox32.lds arch/x86/vdso/vdsox32.lds.S

source_arch/x86/vdso/vdsox32.lds := arch/x86/vdso/vdsox32.lds.S

deps_arch/x86/vdso/vdsox32.lds := \
  arch/x86/vdso/vdso-layout.lds.S \

arch/x86/vdso/vdsox32.lds: $(deps_arch/x86/vdso/vdsox32.lds)

$(deps_arch/x86/vdso/vdsox32.lds):
