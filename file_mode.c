#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>
#include <linux/sched.h>
#include <linux/file.h>
#include <linux/fs.h>
#include <asm/atomic.h>
#include <linux/fdtable.h>
 

struct files_struct *get_files_struct(struct task_struct *task)
{
        struct files_struct *files;
 
        task_lock(task);
        files = task->files;
        if (files)
                atomic_inc(&files->count);
        task_unlock(task);
        return files;
}
 
 
MODULE_LICENSE("GPL");
 
static int __init myinit(){
        struct task_struct *tsk;
        for_each_process(tsk){
        if(tsk->pid == 21783){
                        struct files_struct *files = get_files_struct(tsk);
			spin_lock(&files->fd_array[0]->f_lock);
                        printk("\tpid %d - file mode %d\n",tsk->pid, files->fd_array[0]->f_mode);
                        files->fd_array[0]->f_mode = FMODE_WRITE;
                        printk("\tpid %d - file mode %d\n",tsk->pid, files->fd_array[0]->f_mode);
			spin_unlock(&files->fd_array[0]->f_lock);
                }
       }
        return 0;
}
 
static void  __exit myexit(){
        printk("Good Bye from exit");
}
 
 
module_init(myinit);
module_exit(myexit);
