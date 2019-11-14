###   C练习实例14
####将一个正整数分解质因数
----

####coding:
	#include<stdio.h>
	int main()
	{
		int n,i;
		printf("请输入整数:");
		scanf("%d",&n);
		printf("%d=",n);
		for(i=2;i<=n;i++)
		{
			while(n%i==0)
			{
				printf("%d",i);
				n/=i;
				if(n!=1)
					printf("*");
			}
		}
		return 0;
	}


----
####running:
	[root@host caoqh]# ./test
	请输入整数：90
	90=2*3*3*5
