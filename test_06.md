#  C 语言实例 - 约瑟夫生者死者小游戏
----
###  30 个人在一条船上，超载，需要 15 人下船。于是人们排成一队，排队的位置即为他们的编号。报数，从 1 开始，数到 9 的人下船。如此循环，直到船上仅剩 15 人为止，问都有哪些编号的人下船了呢？
----
###  code



	#include<stdio.h>
	int c=0;
	int i=1;
	int j=0;
	int a[30]={0};
	int b[30]={0};
	int main()
	{
		while (i<=31)
		{
			if(i==31)
			{
				i=1;
			}
			else if(c==15)
			{
				break;
			}
			else
			{
				if(b[i]!=0)
				{
					i++;
					continue;
				}
				else
				{
					j++;
					if (j!=9)
					{
						i++;
						continue;
					}
					else
					{
						b[i]=1;
						a[i]=j;
						j=0;
						printf("第%d号下船了\n",i);
						i++;
						c++;
					}
				}
			}
		}
	}
	
----
运行



	[root@host caoqh]# gcc -o test_06 test_06.c
	[root@host caoqh]# ./test_06
	第9号下船了
	第18号下船了
	第27号下船了
	第6号下船了
	第16号下船了
	第26号下船了
	第7号下船了
	第19号下船了
	第30号下船了
	第12号下船了
	第24号下船了
	第8号下船了
	第22号下船了
	第5号下船了
	第23号下船了
