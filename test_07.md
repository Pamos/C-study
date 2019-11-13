###    C实例12

####    判断101到200之间的素数。
----

####    coding:
    #include<stdio.h>
	int main()
	{
	  int count=0;
	  int i,j;
	  for (i=101;i<=200;i++)
	  {
	     for(j=2;j<i;j++)
		 {
		 if(i%j==0)
		 
		 break;
		 }
		 //如果j能被i整除再跳出循环
		 if (j>=i)
		 {
		   count++;
		   printf("%d",i)
		   //换行，用count计数，每五个数换行
		   if (count%5==0)
		   printf("\n");
		 }
	  }
	  return 0;
	}
	
----

####    running:
    [root@host caoqh]# ./test
    101	103	107	109	113	
    127	131	137	139	149	
    151	157	163	167	173	
    179	181	191	193	197	
    199	[root@host caoqh]# 
