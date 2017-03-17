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
	{ 0xcd1f6671, __VMLINUX_SYMBOL_STR(ata_dummy_port_ops) },
	{ 0xea50dad3, __VMLINUX_SYMBOL_STR(ahci_ignore_sss) },
	{ 0xe7088177, __VMLINUX_SYMBOL_STR(ahci_save_initial_config) },
	{ 0x61f743f4, __VMLINUX_SYMBOL_STR(ahci_pmp_retry_srst_ops) },
	{ 0xfd3386f1, __VMLINUX_SYMBOL_STR(ahci_sdev_attrs) },
	{ 0x63205de1, __VMLINUX_SYMBOL_STR(ata_scsi_unlock_native_capacity) },
	{ 0xd4dd5460, __VMLINUX_SYMBOL_STR(ata_platform_remove_one) },
	{ 0x34f58f12, __VMLINUX_SYMBOL_STR(ata_host_suspend) },
	{ 0x94a68723, __VMLINUX_SYMBOL_STR(ata_scsi_slave_destroy) },
	{ 0x11d12663, __VMLINUX_SYMBOL_STR(ahci_reset_em) },
	{ 0xd30b0681, __VMLINUX_SYMBOL_STR(ata_scsi_queuecmd) },
	{ 0x75a58bd, __VMLINUX_SYMBOL_STR(ata_host_resume) },
	{ 0xb944c1c9, __VMLINUX_SYMBOL_STR(ata_port_desc) },
	{ 0xd84aeaca, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xc560771f, __VMLINUX_SYMBOL_STR(ata_host_alloc_pinfo) },
	{ 0x69e9a2cb, __VMLINUX_SYMBOL_STR(ata_scsi_slave_config) },
	{ 0xc960e183, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x796a3595, __VMLINUX_SYMBOL_STR(ahci_print_info) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xe16590b6, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x5bf310d2, __VMLINUX_SYMBOL_STR(ahci_reset_controller) },
	{ 0xd32fe193, __VMLINUX_SYMBOL_STR(ata_scsi_change_queue_depth) },
	{ 0xf4234fa5, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf5f42e47, __VMLINUX_SYMBOL_STR(ata_host_activate) },
	{ 0x6578d9f4, __VMLINUX_SYMBOL_STR(ahci_shost_attrs) },
	{ 0x960900db, __VMLINUX_SYMBOL_STR(ahci_init_controller) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xeaaed680, __VMLINUX_SYMBOL_STR(ahci_set_em_messages) },
	{ 0xbfaf9b4a, __VMLINUX_SYMBOL_STR(devm_ioremap) },
	{ 0x60f0bcea, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x8807b527, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x5b3dd89d, __VMLINUX_SYMBOL_STR(ata_std_bios_param) },
	{ 0x5c65a533, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x5eacba1f, __VMLINUX_SYMBOL_STR(ahci_interrupt) },
	{ 0xa6b6539e, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x5d12f65b, __VMLINUX_SYMBOL_STR(ata_scsi_ioctl) },
	{ 0xbc0a3622, __VMLINUX_SYMBOL_STR(ahci_ops) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libahci";

MODULE_ALIAS("of:N*T*Csnps,spear-ahci*");
MODULE_ALIAS("of:N*T*Csnps,exynos5440-ahci*");
MODULE_ALIAS("of:N*T*Cibm,476gtr-ahci*");
MODULE_ALIAS("platform:ahci");
MODULE_ALIAS("platform:imx53-ahci");
MODULE_ALIAS("platform:strict-ahci");

MODULE_INFO(srcversion, "DD1A4C032A6E886CEF909CD");
