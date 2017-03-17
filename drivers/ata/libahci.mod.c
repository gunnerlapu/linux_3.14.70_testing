#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x96a8727e, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xcd1f6671, __VMLINUX_SYMBOL_STR(ata_dummy_port_ops) },
	{ 0xce60b7c1, __VMLINUX_SYMBOL_STR(ata_port_freeze) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xf8f3a0fb, __VMLINUX_SYMBOL_STR(ata_ratelimit) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xeb9dc9eb, __VMLINUX_SYMBOL_STR(dev_attr_sw_activity) },
	{ 0x9d6c9a64, __VMLINUX_SYMBOL_STR(ata_port_printk) },
	{ 0x24ca72c1, __VMLINUX_SYMBOL_STR(sata_pmp_error_handler) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x57c86ccb, __VMLINUX_SYMBOL_STR(sata_link_scr_lpm) },
	{ 0x37fe76ab, __VMLINUX_SYMBOL_STR(sata_pmp_qc_defer_cmd_switch) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x6f4eace8, __VMLINUX_SYMBOL_STR(dev_attr_em_message) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x4fdc945d, __VMLINUX_SYMBOL_STR(sata_deb_timing_normal) },
	{ 0xc0f55ee8, __VMLINUX_SYMBOL_STR(sata_pmp_port_ops) },
	{ 0x5d64c596, __VMLINUX_SYMBOL_STR(ata_ehi_push_desc) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x13ac2a0a, __VMLINUX_SYMBOL_STR(ata_dev_set_feature) },
	{ 0xc960e183, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xa59ec353, __VMLINUX_SYMBOL_STR(ata_dev_printk) },
	{ 0x430a47cf, __VMLINUX_SYMBOL_STR(ata_wait_register) },
	{ 0x97eb27ea, __VMLINUX_SYMBOL_STR(ata_std_qc_defer) },
	{ 0xf876aae8, __VMLINUX_SYMBOL_STR(ata_link_abort) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xc737e254, __VMLINUX_SYMBOL_STR(dev_attr_unload_heads) },
	{ 0x37563bbd, __VMLINUX_SYMBOL_STR(ata_msleep) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xcccfb2fa, __VMLINUX_SYMBOL_STR(sata_deb_timing_hotplug) },
	{ 0x97c7bb66, __VMLINUX_SYMBOL_STR(devm_kfree) },
	{ 0x2620bd2d, __VMLINUX_SYMBOL_STR(ata_ehi_clear_desc) },
	{ 0xe7a9fe6c, __VMLINUX_SYMBOL_STR(sata_link_hardreset) },
	{ 0xf4234fa5, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x73c832f2, __VMLINUX_SYMBOL_STR(ata_dev_classify) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x6cd21997, __VMLINUX_SYMBOL_STR(ata_tf_to_fis) },
	{ 0xd65ecb6b, __VMLINUX_SYMBOL_STR(dev_attr_em_message_type) },
	{ 0xdbd29532, __VMLINUX_SYMBOL_STR(sata_lpm_ignore_phy_events) },
	{ 0x8485110a, __VMLINUX_SYMBOL_STR(dev_driver_string) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xc39aff5c, __VMLINUX_SYMBOL_STR(ata_link_printk) },
	{ 0x45cf9697, __VMLINUX_SYMBOL_STR(ata_wait_after_reset) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd388bb2e, __VMLINUX_SYMBOL_STR(ata_qc_complete_multiple) },
	{ 0x21a7dda9, __VMLINUX_SYMBOL_STR(ata_link_next) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9304b6, __VMLINUX_SYMBOL_STR(ata_tf_from_fis) },
	{ 0x6128b5fc, __VMLINUX_SYMBOL_STR(__printk_ratelimit) },
	{ 0xe6585c15, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x1eff6d9d, __VMLINUX_SYMBOL_STR(ata_std_postreset) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x514c4b8c, __VMLINUX_SYMBOL_STR(dev_attr_link_power_management_policy) },
	{ 0x68093a2f, __VMLINUX_SYMBOL_STR(ata_port_abort) },
	{ 0x5c65a533, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xbd32b9bc, __VMLINUX_SYMBOL_STR(sata_async_notification) },
	{ 0xdf061c83, __VMLINUX_SYMBOL_STR(dmam_alloc_coherent) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "9836734463861FED465FDED");
