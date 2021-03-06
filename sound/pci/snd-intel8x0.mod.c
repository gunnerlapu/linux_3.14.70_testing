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
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x29dffab, __VMLINUX_SYMBOL_STR(snd_ac97_tune_hardware) },
	{ 0xd0ee38b8, __VMLINUX_SYMBOL_STR(schedule_timeout_uninterruptible) },
	{ 0x561cd068, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x2c9323ae, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0x6cc72fe0, __VMLINUX_SYMBOL_STR(snd_card_create) },
	{ 0x2a320c, __VMLINUX_SYMBOL_STR(snd_dma_alloc_pages) },
	{ 0xe5c4e0e5, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_msbits) },
	{ 0xc715d9e0, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0x18bf1c27, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x7a66e003, __VMLINUX_SYMBOL_STR(snd_pci_quirk_lookup) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x1f302801, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x9e913c1, __VMLINUX_SYMBOL_STR(snd_pcm_alt_chmaps) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xf0f27b59, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_integer) },
	{ 0xefc5a9ed, __VMLINUX_SYMBOL_STR(snd_ac97_pcm_assign) },
	{ 0x2eba24fa, __VMLINUX_SYMBOL_STR(snd_card_disconnect) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x78c185a5, __VMLINUX_SYMBOL_STR(snd_pcm_suspend_all) },
	{ 0xc193a079, __VMLINUX_SYMBOL_STR(snd_ac97_get_short_name) },
	{ 0x5d41c87c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xebd26b36, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xb440494d, __VMLINUX_SYMBOL_STR(snd_device_new) },
	{ 0xf10de535, __VMLINUX_SYMBOL_STR(ioread8) },
	{ 0xc4579c96, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x6fae357b, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x8be7172, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_list) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc01a99e7, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0x35c67e42, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x728fe3b3, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_pages) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x3932c956, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0xf67818c4, __VMLINUX_SYMBOL_STR(snd_pcm_lib_malloc_pages) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x4b015768, __VMLINUX_SYMBOL_STR(snd_iprintf) },
	{ 0x9508f166, __VMLINUX_SYMBOL_STR(param_ops_bint) },
	{ 0xb248f799, __VMLINUX_SYMBOL_STR(snd_ac97_suspend) },
	{ 0x5e69ec80, __VMLINUX_SYMBOL_STR(snd_ac97_update_power) },
	{ 0x6508b33, __VMLINUX_SYMBOL_STR(snd_ac97_pcm_double_rate_rules) },
	{ 0x9d9dc1bf, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x727c4f3, __VMLINUX_SYMBOL_STR(iowrite8) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x4daa7ba1, __VMLINUX_SYMBOL_STR(snd_dma_free_pages) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x70d5a95d, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x2d9ab9bd, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xe7da29c0, __VMLINUX_SYMBOL_STR(snd_ac97_bus) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xce46e140, __VMLINUX_SYMBOL_STR(ktime_get_ts) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xe0204bca, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x1710c6a1, __VMLINUX_SYMBOL_STR(snd_ac97_mixer) },
	{ 0x7102be02, __VMLINUX_SYMBOL_STR(snd_ac97_update_bits) },
	{ 0x2e4c2be5, __VMLINUX_SYMBOL_STR(snd_ac97_set_rate) },
	{ 0x8c183cbe, __VMLINUX_SYMBOL_STR(iowrite16) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3e96fc00, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xd2afed63, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x8f9d7b02, __VMLINUX_SYMBOL_STR(snd_ac97_pcm_open) },
	{ 0xc5534d64, __VMLINUX_SYMBOL_STR(ioread16) },
	{ 0xa54652e8, __VMLINUX_SYMBOL_STR(snd_card_proc_new) },
	{ 0x7b882148, __VMLINUX_SYMBOL_STR(snd_pcm_lib_preallocate_pages_for_all) },
	{ 0x4de31707, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0xa2188a88, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0xe4a315f3, __VMLINUX_SYMBOL_STR(snd_pcm_add_chmap_ctls) },
	{ 0x1fd8fb8e, __VMLINUX_SYMBOL_STR(snd_pcm_limit_hw_rates) },
	{ 0x783f7abc, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xc866e20c, __VMLINUX_SYMBOL_STR(snd_ac97_resume) },
	{ 0xe92e4177, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0x22393f87, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xa6b6539e, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xdb41e19b, __VMLINUX_SYMBOL_STR(snd_ac97_pcm_close) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x19ac33c4, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-ac97-codec,snd-pcm,snd";

MODULE_ALIAS("pci:v00008086d00002415sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002425sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002445sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002485sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024C5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024D5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000025A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000266Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027DEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002698sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007195sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00007012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000001B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000003Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000006Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000059sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000008Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000DAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000EAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000026Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000746Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00007445sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B9d00005455sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C7BF1EAC29D5C6933990934");
