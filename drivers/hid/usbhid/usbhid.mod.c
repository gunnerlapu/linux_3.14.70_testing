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
	{ 0x2ac89edf, __VMLINUX_SYMBOL_STR(hid_add_device) },
	{ 0x49cb6da6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9924c496, __VMLINUX_SYMBOL_STR(__usb_get_extra_descriptor) },
	{ 0xf5893abf, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x561cd068, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xbf4e676, __VMLINUX_SYMBOL_STR(hid_parse_report) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xcd09c234, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x2873322c, __VMLINUX_SYMBOL_STR(usb_deregister_dev) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xce8e02df, __VMLINUX_SYMBOL_STR(input_ff_create) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xb339ee00, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x11ab143d, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xae6bc669, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x5495392, __VMLINUX_SYMBOL_STR(hid_debug) },
	{ 0xcf649223, __VMLINUX_SYMBOL_STR(hid_input_report) },
	{ 0x57a6ccd0, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x733c3b54, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0x28a5e405, __VMLINUX_SYMBOL_STR(usb_block_urb) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x5d41c87c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xf9c0b663, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x7b2f577a, __VMLINUX_SYMBOL_STR(usb_string) },
	{ 0x31a0438c, __VMLINUX_SYMBOL_STR(usb_lock_device_for_reset) },
	{ 0xc960e183, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xa47329ed, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x1c80262c, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xf664fc25, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xe25a2950, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xc232aa25, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface_async) },
	{ 0xf0ed91f0, __VMLINUX_SYMBOL_STR(usb_unpoison_urb) },
	{ 0xb59b2924, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0x38dbf786, __VMLINUX_SYMBOL_STR(hid_check_keys_pressed) },
	{ 0xf09be4c5, __VMLINUX_SYMBOL_STR(usb_register_dev) },
	{ 0xce3ba3f5, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xceeb6d66, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x7f149921, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x4a7b45d1, __VMLINUX_SYMBOL_STR(hid_set_field) },
	{ 0x5130aec0, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x3b4ceb4a, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xe6e3b875, __VMLINUX_SYMBOL_STR(down_write) },
	{  0x4cd75, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0xac3973c6, __VMLINUX_SYMBOL_STR(hid_alloc_report_buf) },
	{ 0xf4234fa5, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x29e6926f, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x7242985e, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface_async) },
	{ 0x573b369, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{        0, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xfd6aa11a, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xfa7dfcf7, __VMLINUX_SYMBOL_STR(usb_find_interface) },
	{ 0xfe9819da, __VMLINUX_SYMBOL_STR(usb_interrupt_msg) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x4d4198b, __VMLINUX_SYMBOL_STR(hid_destroy_device) },
	{ 0x2d9ab9bd, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x22f144ee, __VMLINUX_SYMBOL_STR(hid_allocate_device) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x34f22f94, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xed67ca66, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface_no_resume) },
	{ 0xbc7799b4, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface_no_suspend) },
	{ 0xf150c836, __VMLINUX_SYMBOL_STR(hidinput_count_leds) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x5c8b5ce8, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x695cf345, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xacae1577, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xe6585c15, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x9e323687, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xa6b6539e, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x5d080e69, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x89a26a71, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0xbc01e282, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0x380ea74, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xba81b904, __VMLINUX_SYMBOL_STR(hid_output_report) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hid";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic03isc*ip*in*");

MODULE_INFO(srcversion, "BFD58E4DBF1EEAC27C2EE50");
