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
	{ 0x15aa6cb2, __VMLINUX_SYMBOL_STR(bus_register) },
	{ 0x588d15a1, __VMLINUX_SYMBOL_STR(device_remove_bin_file) },
	{ 0x29286643, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x49cb6da6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc33efbc, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x2003579a, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0xe358fb9a, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x1ea6a572, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x561cd068, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x26093a16, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xb5dcab5b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xe0c3bb43, __VMLINUX_SYMBOL_STR(input_ff_event) },
	{ 0x19d09a1b, __VMLINUX_SYMBOL_STR(input_alloc_absinfo) },
	{ 0xf22449ae, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x874a68ee, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xdadd7998, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xb339ee00, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x9df58d0a, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x5e02d216, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x24df6fe8, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x832f59d7, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0x9b14308d, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x98f12be4, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0xc960e183, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xa47329ed, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xf147ecb1, __VMLINUX_SYMBOL_STR(down_trylock) },
	{ 0xe25a2950, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x479c3c86, __VMLINUX_SYMBOL_STR(find_next_zero_bit) },
	{ 0x84fe2508, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xb59b2924, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0x801a8193, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xceeb6d66, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x7f149921, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x67e376b8, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x5aaed3c5, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x7907cce4, __VMLINUX_SYMBOL_STR(bus_unregister) },
	{ 0x21f1d97d, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0xf4234fa5, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x18c884fe, __VMLINUX_SYMBOL_STR(driver_create_file) },
	{ 0xf45eb9e7, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xf417d386, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xb46ba911, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0xe0088791, __VMLINUX_SYMBOL_STR(device_create_bin_file) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x2d9ab9bd, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x2c256e1f, __VMLINUX_SYMBOL_STR(input_scancode_to_scalar) },
	{ 0x5860aad4, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0xa633fa94, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xcfcd6c09, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x376be320, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0x71e3cecb, __VMLINUX_SYMBOL_STR(up) },
	{ 0x6681db7d, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xacae1577, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0xe6585c15, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xdd5f9475, __VMLINUX_SYMBOL_STR(driver_attach) },
	{ 0x790a8679, __VMLINUX_SYMBOL_STR(driver_remove_file) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x95e81784, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x8570206a, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xa6b6539e, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0xa7f92105, __VMLINUX_SYMBOL_STR(add_uevent_var) },
	{ 0x72bc96e6, __VMLINUX_SYMBOL_STR(input_allocate_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "FEEE13215DD413019B9BFE4");
