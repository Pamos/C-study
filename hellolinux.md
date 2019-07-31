# 编译运行第一份C代码
### 使用vim打开hello.c
```
[root@host ~]# cd caoqh
[root@host caoqh]# vim hello.c
```
### hello.c
```
#include<stdio.h>
int main(){
	printf("hello linux.");
	return 0;
}
```
### 编译运行
```
[root@host caoqh]# gcc-o hello hello.c
[root@host caoqh]# ./hello
hello linux.
```
