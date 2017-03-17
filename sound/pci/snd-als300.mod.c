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
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x561cd068, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x2c9323ae, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0x6cc72fe0, __VMLINUX_SYMBOL_STR(snd_card_create) },
	{ 0x9563ed2f, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0x18bf1c27, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x1f302801, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x2eba24fa, __VMLINUX_SYMBOL_STR(snd_card_disconnect) },
	{ 0x78c185a5, __VMLINUX_SYMBOL_STR(snd_pcm_suspend_all) },
	{ 0x5d41c87c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xebd26b36, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xb440494d, __VMLINUX_SYMBOL_STR(snd_device_new) },
	{ 0xc4579c96, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc01a99e7, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0x728fe3b3, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_pages) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x3932c956, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0xf67818c4, __VMLINUX_SYMBOL_STR(snd_pcm_lib_malloc_pages) },
	{ 0xb248f799, __VMLINUX_SYMBOL_STR(snd_ac97_suspend) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x70d5a95d, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x2d9ab9bd, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xe7da29c0, __VMLINUX_SYMBOL_STR(snd_ac97_bus) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xe0204bca, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x1710c6a1, __VMLINUX_SYMBOL_STR(snd_ac97_mixer) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3e96fc00, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xad5a47a3, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xd2afed63, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x7b882148, __VMLINUX_SYMBOL_STR(snd_pcm_lib_preallocate_pages_for_all) },
	{ 0x4de31707, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0xa2188a88, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0x783f7abc, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0xc866e20c, __VMLINUX_SYMBOL_STR(snd_ac97_resume) },
	{ 0x22393f87, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xa6b6539e, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x19ac33c4, __VMLINUX_SYMBOL_STR(pci_save_state) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd,snd-ac97-codec";

MODULE_ALIAS("pci:v00004005d00000300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00004005d00000308sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "BF31CBE2617633CC12D561D");
