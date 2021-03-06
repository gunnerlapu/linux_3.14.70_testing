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
	{ 0x49cb6da6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1b82065, __VMLINUX_SYMBOL_STR(snd_midi_event_reset_encode) },
	{ 0x86d5255f, __VMLINUX_SYMBOL_STR(_raw_write_lock_irqsave) },
	{ 0x1a724fcc, __VMLINUX_SYMBOL_STR(snd_seq_kernel_client_ctl) },
	{ 0xea86c297, __VMLINUX_SYMBOL_STR(snd_device_free) },
	{ 0xc01cf848, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x4764468d, __VMLINUX_SYMBOL_STR(snd_seq_create_kernel_client) },
	{ 0xdbb2013e, __VMLINUX_SYMBOL_STR(snd_rawmidi_set_ops) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x2ceec35d, __VMLINUX_SYMBOL_STR(snd_midi_event_decode) },
	{ 0xb7b5f47, __VMLINUX_SYMBOL_STR(snd_rawmidi_new) },
	{ 0x168f1082, __VMLINUX_SYMBOL_STR(_raw_write_unlock_irqrestore) },
	{ 0xe0a50454, __VMLINUX_SYMBOL_STR(snd_midi_event_new) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x361aa60b, __VMLINUX_SYMBOL_STR(snd_rawmidi_transmit_peek) },
	{ 0x6b3633f6, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xb494afee, __VMLINUX_SYMBOL_STR(snd_midi_event_free) },
	{ 0x1abadd99, __VMLINUX_SYMBOL_STR(snd_rawmidi_transmit_ack) },
	{ 0x95f89a33, __VMLINUX_SYMBOL_STR(_raw_write_lock_irq) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x2d9ab9bd, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe934da1d, __VMLINUX_SYMBOL_STR(snd_seq_dump_var_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x668570c0, __VMLINUX_SYMBOL_STR(snd_midi_event_encode) },
	{ 0x3fb4d161, __VMLINUX_SYMBOL_STR(snd_seq_kernel_client_dispatch) },
	{ 0x6bb71038, __VMLINUX_SYMBOL_STR(snd_seq_delete_kernel_client) },
	{ 0x200d8383, __VMLINUX_SYMBOL_STR(snd_rawmidi_receive) },
	{ 0x86313796, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-seq-midi-event,snd-seq,snd,snd-rawmidi";


MODULE_INFO(srcversion, "2AF5DCF4B58EA556901F4E9");
