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
	{ 0x6ea09972, __VMLINUX_SYMBOL_STR(snd_midi_channel_alloc_set) },
	{ 0x1a09cccb, __VMLINUX_SYMBOL_STR(snd_opl3_reset) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xb9948d2c, __VMLINUX_SYMBOL_STR(snd_midi_channel_free_set) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xb339ee00, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4764468d, __VMLINUX_SYMBOL_STR(snd_seq_create_kernel_client) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x1f93099f, __VMLINUX_SYMBOL_STR(snd_opl3_find_patch) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xc622fb29, __VMLINUX_SYMBOL_STR(snd_seq_device_unregister_driver) },
	{ 0xceeb6d66, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xf0a1fdb3, __VMLINUX_SYMBOL_STR(snd_midi_process_event) },
	{ 0xbe2c0274, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x6b3633f6, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xa35dfa3f, __VMLINUX_SYMBOL_STR(snd_seq_device_register_driver) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x5060a19, __VMLINUX_SYMBOL_STR(snd_opl3_regmap) },
	{ 0x6bb71038, __VMLINUX_SYMBOL_STR(snd_seq_delete_kernel_client) },
	{ 0x29556ab3, __VMLINUX_SYMBOL_STR(snd_seq_event_port_attach) },
	{ 0x86313796, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-seq-midi-emul,snd-opl3-lib,snd-seq,snd-seq-device";


MODULE_INFO(srcversion, "316B4616C665A9F3EE80B49");
