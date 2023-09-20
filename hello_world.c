#include<linux/module.h>
#include<linux/init.h>
#include<linux/kernel.h>

MODULE_LICENSE("GPL");

int __init startFun(void)
{
	printk(KERN_INFO "\nHello world\n");
	return 0;
}

void __exit endFun(void)
{
	printk(KERN_INFO "\nbye world\n");
}

module_init(startFun);
module_exit(endFun);
