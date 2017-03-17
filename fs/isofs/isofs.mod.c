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
	{        0, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x7067aec8, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xe8acae74, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0x49cb6da6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x5542464b, __VMLINUX_SYMBOL_STR(sb_min_blocksize) },
	{ 0x77ecac9f, __VMLINUX_SYMBOL_STR(zlib_inflateEnd) },
	{ 0x64f59e89, __VMLINUX_SYMBOL_STR(__bread) },
	{ 0xed769db9, __VMLINUX_SYMBOL_STR(unload_nls) },
	{ 0x2fdf86b7, __VMLINUX_SYMBOL_STR(save_mount_options) },
	{ 0xd77a8a94, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x885e95d6, __VMLINUX_SYMBOL_STR(iget5_locked) },
	{ 0xc1d2f758, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0x205fed57, __VMLINUX_SYMBOL_STR(ll_rw_block) },
	{ 0xcae232b, __VMLINUX_SYMBOL_STR(utf16s_to_utf8s) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x3d5844b3, __VMLINUX_SYMBOL_STR(strnicmp) },
	{ 0xb339ee00, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x8e081519, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x92a15efe, __VMLINUX_SYMBOL_STR(page_symlink_inode_operations) },
	{ 0x6bd60279, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xf1e75c13, __VMLINUX_SYMBOL_STR(mpage_readpages) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x1fa074f2, __VMLINUX_SYMBOL_STR(mpage_readpage) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x78eb8b7d, __VMLINUX_SYMBOL_STR(d_obtain_alias) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xce5ac24f, __VMLINUX_SYMBOL_STR(zlib_inflate_workspacesize) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x80bf2b5f, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x814aeb1e, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0xceeb6d66, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xdfae75a3, __VMLINUX_SYMBOL_STR(__wait_on_buffer) },
	{ 0xa07a37f0, __VMLINUX_SYMBOL_STR(memchr) },
	{ 0x198a14ae, __VMLINUX_SYMBOL_STR(generic_ro_fops) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0x5b00ac8f, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0xcfe3f7b3, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0x881039d0, __VMLINUX_SYMBOL_STR(zlib_inflate) },
	{ 0x1ee55ddb, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x70eec980, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x32787d30, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x39c96a6d, __VMLINUX_SYMBOL_STR(load_nls) },
	{ 0xb163fc1e, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x56091306, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x6f20960a, __VMLINUX_SYMBOL_STR(full_name_hash) },
	{ 0x2d9ab9bd, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x5efc636b, __VMLINUX_SYMBOL_STR(generic_show_options) },
	{ 0x46585bbe, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x2147c4d3, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x4211c3c1, __VMLINUX_SYMBOL_STR(zlib_inflateInit2) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x8be3c7f1, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0xfc8b62a1, __VMLINUX_SYMBOL_STR(load_nls_default) },
	{ 0xf773a778, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0x5a6ed940, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0xf6c5b357, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x10df56b7, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xe273f5fc, __VMLINUX_SYMBOL_STR(ioctl_by_bdev) },
	{ 0xa435aa8a, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x9a052dbd, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0x73b55e7e, __VMLINUX_SYMBOL_STR(__getblk) },
	{ 0x96053822, __VMLINUX_SYMBOL_STR(generic_block_bmap) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B20841FB504D1C00079F15A");
