Patch
=====
一：
一段程序（lyl_old.c)通过GCC编译后（gcc lyl_old.c -o lyl_old -g)形成可执行文件(lyl_old)，经GDB调试发生段错误，后改写有新程序(lyl_new.c).
通过命令diff -ruN lyl_old.c lyl_new.c >lyl.patch 生成名为lyl.patch的补丁。
通过执行命令patch -p0 lyl_old.c <lyl.patch可完成对程序lyl_old.c的修正，实现程序目标。输出p is HelloWorld.

二：
一段程序（duan.c)有段错误。修改后有新程序duan1.c,执行命令：diff -ruN duan.c duan1.c >first.patch 生成补丁first.patch.
通过执行命令 patch -p0 duan.c < first.patch 完成对错误程序的修正，输出正确结果20.
