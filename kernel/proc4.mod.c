#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf704969, "module_layout" },
	{ 0xdb0f1622, "seq_release" },
	{ 0x3d9d351b, "seq_lseek" },
	{ 0xbe503d2d, "seq_read" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xdaef3116, "remove_proc_entry" },
	{ 0x84644378, "proc_create" },
	{ 0xd78b86c9, "seq_printf" },
	{ 0x27d06596, "seq_open" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "057E58445AD7D6CD6A18894");
