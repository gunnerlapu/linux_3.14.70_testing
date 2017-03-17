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
	{ 0x3193ba09, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x49cb6da6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x561cd068, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xbf432744, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x50fc79e4, __VMLINUX_SYMBOL_STR(serio_unregister_driver) },
	{ 0xf5bf188f, __VMLINUX_SYMBOL_STR(ps2_handle_ack) },
	{ 0xfb3bf54f, __VMLINUX_SYMBOL_STR(ps2_sendbyte) },
	{ 0x34bae5a7, __VMLINUX_SYMBOL_STR(ps2_handle_response) },
	{ 0xbc63fe78, __VMLINUX_SYMBOL_STR(input_mt_report_finger_count) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x19d09a1b, __VMLINUX_SYMBOL_STR(input_alloc_absinfo) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x26a217fe, __VMLINUX_SYMBOL_STR(ps2_end_command) },
	{ 0x7187e396, __VMLINUX_SYMBOL_STR(__ps2_command) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xb339ee00, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xdf23774c, __VMLINUX_SYMBOL_STR(serio_interrupt) },
	{ 0x54eb3233, __VMLINUX_SYMBOL_STR(ps2_drain) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x51b9a7be, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x33e13362, __VMLINUX_SYMBOL_STR(input_mt_report_pointer_emulation) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x832f59d7, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0x9b14308d, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xa90bbfeb, __VMLINUX_SYMBOL_STR(serio_unregister_child_port) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xd4835ef8, __VMLINUX_SYMBOL_STR(dmi_check_system) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb04228db, __VMLINUX_SYMBOL_STR(__serio_register_driver) },
	{ 0x5f005368, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0xc960e183, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf664fc25, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71954cbd, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xceeb6d66, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x1a84d033, __VMLINUX_SYMBOL_STR(input_mt_init_slots) },
	{ 0x2276db98, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0x84a0d6c9, __VMLINUX_SYMBOL_STR(serio_close) },
	{ 0x3294e08f, __VMLINUX_SYMBOL_STR(serio_open) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x9a4853e, __VMLINUX_SYMBOL_STR(device_create_file) },
	{  0x4cd75, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0xf4234fa5, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xbc5893bf, __VMLINUX_SYMBOL_STR(ps2_command) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xf417d386, __VMLINUX_SYMBOL_STR(input_register_device) },
	{        0, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xb46ba911, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xd29a8d2e, __VMLINUX_SYMBOL_STR(ps2_init) },
	{ 0x2d9ab9bd, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x34f22f94, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x365b1ea9, __VMLINUX_SYMBOL_STR(serio_reconnect) },
	{ 0x65127aae, __VMLINUX_SYMBOL_STR(__serio_register_port) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69ad2f20, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xcfcd6c09, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0xba2152a6, __VMLINUX_SYMBOL_STR(input_mt_report_slot_state) },
	{ 0x9127f01a, __VMLINUX_SYMBOL_STR(ps2_cmd_aborted) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xae6bb38, __VMLINUX_SYMBOL_STR(input_mt_sync_frame) },
	{ 0xe6585c15, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xa6b6539e, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x50d1dcbb, __VMLINUX_SYMBOL_STR(ps2_begin_command) },
	{ 0x1342962a, __VMLINUX_SYMBOL_STR(input_mt_assign_slots) },
	{ 0x72bc96e6, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x81e6b37f, __VMLINUX_SYMBOL_STR(dmi_get_system_info) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("serio:ty01pr*id*ex*");
MODULE_ALIAS("serio:ty05pr*id*ex*");

MODULE_INFO(srcversion, "52904F3A070D5DD2A5D1F8D");
