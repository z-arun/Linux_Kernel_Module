#include<linux/module.h>
#include<linux/init.h>
#include<linux/kernel.h>

MODULE_LICENSE("GPL");

int __init startFun(void)
{
	printk(KERN_INFO "Hello world");
	return 0;
}

void __exit endFun(void)
{
	printk(KERN_INFO "bye world");
}

module_init(startFun);
module_exit(endFun);
