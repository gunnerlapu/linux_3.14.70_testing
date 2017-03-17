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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x49cb6da6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xd0ee38b8, __VMLINUX_SYMBOL_STR(schedule_timeout_uninterruptible) },
	{ 0x9168104b, __VMLINUX_SYMBOL_STR(snd_info_create_card_entry) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xb339ee00, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9e913c1, __VMLINUX_SYMBOL_STR(snd_pcm_alt_chmaps) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x4f74513d, __VMLINUX_SYMBOL_STR(_snd_ctl_add_slave) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xb440494d, __VMLINUX_SYMBOL_STR(snd_device_new) },
	{ 0x5991219c, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x823cdc1, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0xe25a2950, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2d5d6532, __VMLINUX_SYMBOL_STR(ac97_bus_type) },
	{ 0xceeb6d66, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xe98f9560, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x4b015768, __VMLINUX_SYMBOL_STR(snd_iprintf) },
	{ 0x61651be, __VMLINUX_SYMBOL_STR(strcat) },
	{ 0x7f9ac141, __VMLINUX_SYMBOL_STR(snd_pcm_hw_rule_add) },
	{ 0xa1ffb5b1, __VMLINUX_SYMBOL_STR(snd_ctl_make_virtual_master) },
	{ 0x3cc8eb1f, __VMLINUX_SYMBOL_STR(snd_component_add) },
	{ 0x939342f5, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x4e1b99f, __VMLINUX_SYMBOL_STR(snd_pcm_std_chmaps) },
	{ 0x2d5475ae, __VMLINUX_SYMBOL_STR(snd_ctl_remove_id) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x4191368e, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x2d9ab9bd, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xc39cc0ef, __VMLINUX_SYMBOL_STR(snd_ctl_find_id) },
	{ 0x4cda566, __VMLINUX_SYMBOL_STR(snd_interval_refine) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5bee6c60, __VMLINUX_SYMBOL_STR(snd_info_free_entry) },
	{ 0x906d9c93, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x6a1a0197, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0x95e81784, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x8080b95c, __VMLINUX_SYMBOL_STR(snd_info_register) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd,snd-pcm,ac97_bus";


MODULE_INFO(srcversion, "33EBDD4647E285F0D03B60E");
