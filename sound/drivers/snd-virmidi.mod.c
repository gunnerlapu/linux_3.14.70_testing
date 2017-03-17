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
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x561cd068, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x6cc72fe0, __VMLINUX_SYMBOL_STR(snd_card_create) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xbcc440ff, __VMLINUX_SYMBOL_STR(platform_device_register_full) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xd84aeaca, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x5d41c87c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfdd2d894, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x4d6eb1d1, __VMLINUX_SYMBOL_STR(snd_virmidi_new) },
	{ 0x4de31707, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0xa2188a88, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0x8807b527, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xa6b6539e, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd,snd-seq-virmidi";


MODULE_INFO(srcversion, "08FA7370954BBFDCA2C08F9");
