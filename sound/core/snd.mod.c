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
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x49cb6da6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x59d6a170, __VMLINUX_SYMBOL_STR(put_pid) },
	{ 0xf5893abf, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xa5752f60, __VMLINUX_SYMBOL_STR(proc_symlink) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x4acd93d3, __VMLINUX_SYMBOL_STR(release_resource) },
	{ 0xc42e06dd, __VMLINUX_SYMBOL_STR(sound_class) },
	{ 0x86d5255f, __VMLINUX_SYMBOL_STR(_raw_write_lock_irqsave) },
	{ 0x15664485, __VMLINUX_SYMBOL_STR(pid_vnr) },
	{ 0xb5dcab5b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xbfe19491, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xc01cf848, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0xdadd7998, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xe3057dc7, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0xddf748c, __VMLINUX_SYMBOL_STR(proc_set_size) },
	{ 0xb339ee00, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xe241b3b5, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x57a6ccd0, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x168f1082, __VMLINUX_SYMBOL_STR(_raw_write_unlock_irqrestore) },
	{ 0xba6ab0c3, __VMLINUX_SYMBOL_STR(proc_remove) },
	{ 0xf116d4b5, __VMLINUX_SYMBOL_STR(copy_in_user) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xf82abc1d, __VMLINUX_SYMBOL_STR(isa_dma_bridge_buggy) },
	{ 0x493141d5, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0x5d41c87c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xb8e7ce2c, __VMLINUX_SYMBOL_STR(__put_user_8) },
	{ 0xe600564, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xa47329ed, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xe25a2950, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x7c1372e8, __VMLINUX_SYMBOL_STR(panic) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xb59b2924, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0xab2abddf, __VMLINUX_SYMBOL_STR(dma_spin_lock) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xceeb6d66, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0x7f149921, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x67e376b8, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xa724257f, __VMLINUX_SYMBOL_STR(init_uts_ns) },
	{ 0x3b4ceb4a, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xe6e3b875, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x61651be, __VMLINUX_SYMBOL_STR(strcat) },
	{ 0x9a4853e, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x6b3633f6, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xa916b694, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{        0, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x2d9ab9bd, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x99195078, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x34f22f94, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xab4e24cf, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x5860aad4, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x30d9ba7c, __VMLINUX_SYMBOL_STR(proc_mkdir_mode) },
	{        0, __VMLINUX_SYMBOL_STR(compat_alloc_user_space) },
	{ 0xacae1577, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x906d9c93, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x9291cd3b, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xa6b6539e, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x2a6e6109, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0x86313796, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x7c2d098f, __VMLINUX_SYMBOL_STR(krealloc) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=soundcore";


MODULE_INFO(srcversion, "1629D7983B92732DC92E3C5");
