##(C语言经典程序100例)【程序3】
----

###题目：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？


    #include <stdio.h>
    int main()
    {
	    int a,b,c,count=0;;
	    for(a=1;a<=4;a++)
    	{
		    for(b=1;b<=4;b++)
		    {
			    for(c=1;c<=4;c++)
			    {
 
				    if(a!=b && a!=c && b!=c){
					    count++;
					    printf("%d\n",a*100+b*10+c*1);   	
				    }		
			    }
		    }
	    }
	    printf("%d",count);
    }
	
	
		
###结果

    [root@host caoqh]# vim test_03.c
    [root@host caoqh]# gcc -o test_03 test_03.c
    [root@host caoqh]# ./test_03
    123
    124
    132
    134
    142
    143
    213
    214
    231
    234
    241
    243
    312
    314
    321
    324
    341
    342
    412
    413
    421
    423
    431
    432
    24[root@host caoqh]# 
