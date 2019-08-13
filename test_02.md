##(C语言经典程序100例)【程序1】
----

###题目：古典问题：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问第n个月的兔子总数为多少？

----
####1.根据兔子对数规律  1 1 2 3 5 8 13 21 ...


    #include<stdio.h>
    int main()
    {
		int i;
		int n=0;
		printf("请输入月份n:\n");
		scanf("%d",&n);
	    int n1=1,n2=1,sum=0;
		if(n<=2)
		{
			printf("第%d个月的兔子数为2",n);
		}
		else if(n>2)
		{
			for(i=3;i<=n;i++)
			{
				sum=n1+n2;
				n1=n2;
				n2=sum;
			}
			printf("\n第%d个月的兔子数为%d",n,sum);
		}
		return 0;
	}
	
	
		
###结果

    [root@host ~]# cd caoqh
    [root@host caoqh]# vim test_02.c
    [root@host caoqh]# gcc -o test_02 test_02.c
    [root@host caoqh]# ./test_02
    请输入月份n:
    5
    第5个月的兔子数为5[root@host caoqh]# 
