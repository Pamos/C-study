#C 语言实例 - 字符转 ASCII 码
----
###code


	#include<stdio.h>
	int main()
	{
	char c;
	printf("请输入一个字符：");
	
	
	//读取用户输入
	scanf("%c",&c);
	
	printf("%c的ASCII值为%d",c,c);
	return 0;
	}
	
	
###运行
	[root@host caoqh]# gcc -o test_05 test_05.c
	[root@host caoqh]# ./test_05
	请输入一个字符：a
	a的ASCII值为97[root@host caoqh]#