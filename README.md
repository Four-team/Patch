Patch
=====
一段程序（lyl_old.c)通过GDB调试发生段错误，改写有新程序(lyl_new.c).
通过命令diff -ruN lyl_old.c lyl_new.c >lyl.patch 生成名为lyl.patch的补丁。
通过执行命令patch -p0 lyl_old.c <lyl.patch可完成对程序lyl_old.c的修正，实现程序目标。输出p is HelloWorld.

