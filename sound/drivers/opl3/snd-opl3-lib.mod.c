#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x96a8727e, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x1fedf0f4, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0x49cb6da6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xea86c297, __VMLINUX_SYMBOL_STR(snd_device_free) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xff7559e4, __VMLINUX_SYMBOL_STR(ioport_resource) },
	{ 0xb440494d, __VMLINUX_SYMBOL_STR(snd_device_new) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x1684d9db, __VMLINUX_SYMBOL_STR(snd_timer_new) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xf34b5e4b, __VMLINUX_SYMBOL_STR(snd_hwdep_new) },
	{ 0x2ae3deaa, __VMLINUX_SYMBOL_STR(release_and_free_resource) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x2d9ab9bd, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x52cfb632, __VMLINUX_SYMBOL_STR(snd_timer_interrupt) },
	{ 0xa283c911, __VMLINUX_SYMBOL_STR(snd_seq_device_new) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd,snd-timer,snd-hwdep,snd-seq-device";


MODULE_INFO(srcversion, "9FE35009FCFD4AE4EBDCD76");
