cmd_crypto/asymmetric_keys/x509_rsakey-asn1.o := gcc -Wp,-MD,crypto/asymmetric_keys/.x509_rsakey-asn1.o.d  -nostdinc -isystem /usr/lib/gcc/x86_64-linux-gnu/4.6/include -I/home/gunner/Documents/linux-3.14.70/arch/x86/include -Iarch/x86/include/generated  -Iinclude -I/home/gunner/Documents/linux-3.14.70/arch/x86/include/uapi -Iarch/x86/include/generated/uapi -I/home/gunner/Documents/linux-3.14.70/include/uapi -Iinclude/generated/uapi -include /home/gunner/Documents/linux-3.14.70/include/linux/kconfig.h -D__KERNEL__ -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -std=gnu89 -O2 -m64 -mno-mmx -mno-sse -mtune=generic -mno-red-zone -mcmodel=kernel -funit-at-a-time -maccumulate-outgoing-args -DCONFIG_X86_X32_ABI -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -DCONFIG_AS_CFI_SECTIONS=1 -DCONFIG_AS_FXSAVEQ=1 -DCONFIG_AS_CRC32=1 -DCONFIG_AS_AVX=1 -DCONFIG_AS_AVX2=1 -pipe -Wno-sign-compare -fno-asynchronous-unwind-tables -mno-sse -mno-mmx -mno-sse2 -mno-3dnow -mno-avx -Wframe-larger-than=1024 -fno-stack-protector -Wno-unused-but-set-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-var-tracking-assignments -pg -mfentry -DCC_USING_FENTRY -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -DCC_HAVE_ASM_GOTO    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(x509_rsakey_asn1)"  -D"KBUILD_MODNAME=KBUILD_STR(x509_key_parser)" -c -o crypto/asymmetric_keys/.tmp_x509_rsakey-asn1.o crypto/asymmetric_keys/x509_rsakey-asn1.c

source_crypto/asymmetric_keys/x509_rsakey-asn1.o := crypto/asymmetric_keys/x509_rsakey-asn1.c

deps_crypto/asymmetric_keys/x509_rsakey-asn1.o := \
  include/linux/asn1_ber_bytecode.h \
  include/linux/types.h \
    $(wildcard include/config/have/uid16.h) \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  include/uapi/linux/types.h \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/uapi/asm/types.h \
  /home/gunner/Documents/linux-3.14.70/include/uapi/asm-generic/types.h \
  include/asm-generic/int-ll64.h \
  include/uapi/asm-generic/int-ll64.h \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/uapi/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/uapi/asm-generic/bitsperlong.h \
  /home/gunner/Documents/linux-3.14.70/include/uapi/linux/posix_types.h \
  include/linux/stddef.h \
  include/uapi/linux/stddef.h \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
    $(wildcard include/config/gcov/kernel.h) \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/asm/posix_types.h \
    $(wildcard include/config/x86/32.h) \
  /home/gunner/Documents/linux-3.14.70/arch/x86/include/uapi/asm/posix_types_64.h \
  /home/gunner/Documents/linux-3.14.70/include/uapi/asm-generic/posix_types.h \
  include/linux/asn1.h \
  crypto/asymmetric_keys/x509_rsakey-asn1.h \
  include/linux/asn1_decoder.h \

crypto/asymmetric_keys/x509_rsakey-asn1.o: $(deps_crypto/asymmetric_keys/x509_rsakey-asn1.o)

$(deps_crypto/asymmetric_keys/x509_rsakey-asn1.o):
