cmd_arch/x86/vdso/vdso.so.dbg := gcc -nostdlib -o arch/x86/vdso/vdso.so.dbg -fPIC -shared  -Wl,--hash-style=sysv -m64 -Wl,-soname=linux-vdso.so.1 -Wl,--no-undefined -Wl,-z,max-page-size=4096 -Wl,-z,common-page-size=4096 -Wl,-T,arch/x86/vdso/vdso.lds arch/x86/vdso/vdso-note.o arch/x86/vdso/vclock_gettime.o arch/x86/vdso/vgetcpu.o && sh /home/gunner/Documents/linux-3.14.70/arch/x86/vdso/checkundef.sh 'nm' 'arch/x86/vdso/vdso.so.dbg'
