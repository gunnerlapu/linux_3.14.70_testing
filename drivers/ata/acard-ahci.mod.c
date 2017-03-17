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
	{ 0xbc0a3622, __VMLINUX_SYMBOL_STR(ahci_ops) },
	{ 0xfd3386f1, __VMLINUX_SYMBOL_STR(ahci_sdev_attrs) },
	{ 0x6578d9f4, __VMLINUX_SYMBOL_STR(ahci_shost_attrs) },
	{ 0x63205de1, __VMLINUX_SYMBOL_STR(ata_scsi_unlock_native_capacity) },
	{ 0x5b3dd89d, __VMLINUX_SYMBOL_STR(ata_std_bios_param) },
	{ 0xd32fe193, __VMLINUX_SYMBOL_STR(ata_scsi_change_queue_depth) },
	{ 0x94a68723, __VMLINUX_SYMBOL_STR(ata_scsi_slave_destroy) },
	{ 0x69e9a2cb, __VMLINUX_SYMBOL_STR(ata_scsi_slave_config) },
	{ 0xd30b0681, __VMLINUX_SYMBOL_STR(ata_scsi_queuecmd) },
	{ 0x5d12f65b, __VMLINUX_SYMBOL_STR(ata_scsi_ioctl) },
	{ 0xcd3b50da, __VMLINUX_SYMBOL_STR(ata_pci_remove_one) },
	{ 0x70d5a95d, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xd2afed63, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x38dae510, __VMLINUX_SYMBOL_STR(ata_pci_device_suspend) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1fc28e78, __VMLINUX_SYMBOL_STR(pci_enable_msi_block) },
	{ 0xc960e183, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xc0d6c398, __VMLINUX_SYMBOL_STR(pcim_pin_device) },
	{ 0x5f0c8248, __VMLINUX_SYMBOL_STR(ata_print_version) },
	{ 0xf5f42e47, __VMLINUX_SYMBOL_STR(ata_host_activate) },
	{ 0x5eacba1f, __VMLINUX_SYMBOL_STR(ahci_interrupt) },
	{ 0xebd26b36, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x796a3595, __VMLINUX_SYMBOL_STR(ahci_print_info) },
	{ 0x939342f5, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0xad5a47a3, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x9563ed2f, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0xcd1f6671, __VMLINUX_SYMBOL_STR(ata_dummy_port_ops) },
	{ 0x2cdbeb, __VMLINUX_SYMBOL_STR(ata_port_pbar_desc) },
	{ 0xea50dad3, __VMLINUX_SYMBOL_STR(ahci_ignore_sss) },
	{ 0xc560771f, __VMLINUX_SYMBOL_STR(ata_host_alloc_pinfo) },
	{ 0xeaaed680, __VMLINUX_SYMBOL_STR(ahci_set_em_messages) },
	{ 0xe7088177, __VMLINUX_SYMBOL_STR(ahci_save_initial_config) },
	{ 0xdb1f6d46, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0xfd7e54c7, __VMLINUX_SYMBOL_STR(pcim_iomap_regions_request_all) },
	{ 0x174d7e, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0xe6585c15, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xf4234fa5, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x6c84cac7, __VMLINUX_SYMBOL_STR(ahci_port_resume) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xdf061c83, __VMLINUX_SYMBOL_STR(dmam_alloc_coherent) },
	{ 0x5c65a533, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x5cab7df1, __VMLINUX_SYMBOL_STR(ahci_fill_cmd_slot) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6cd21997, __VMLINUX_SYMBOL_STR(ata_tf_to_fis) },
	{ 0x9304b6, __VMLINUX_SYMBOL_STR(ata_tf_from_fis) },
	{ 0x960900db, __VMLINUX_SYMBOL_STR(ahci_init_controller) },
	{ 0x5bf310d2, __VMLINUX_SYMBOL_STR(ahci_reset_controller) },
	{ 0x75a58bd, __VMLINUX_SYMBOL_STR(ata_host_resume) },
	{ 0xa9fece2c, __VMLINUX_SYMBOL_STR(ata_pci_device_do_resume) },
	{ 0xa6b6539e, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libahci";

MODULE_ALIAS("pci:v00001191d0000000Dsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "508DB356E66DD264B7DA97C");
