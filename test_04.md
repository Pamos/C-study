#C 语言实例 - 两个整数相加
----
###code
     #include<stdio.h>
     int main(void)
     {
       int firstNumber,secondNumber,sumOfTwoNumbers;
       printf("请输入相加的两个数：\n");
       scanf("%d %d",&firstNumber,&secondNumber);
       sumOfTwoNumbers=firstNumber+secondNumber;
       printf("两数之和为：%d",sumOfTwoNumbers);
       return 0;
     }
###运行结果
    [root@host caoqh]# gcc -o test_04 test_04.c
    [root@host caoqh]# ./test_04
    请输入相加的两个数：
    45 56
    两数之和为：101[root@host caoqh]#


###tips:
*记住每一个符号不能错漏
*scanf函数使用时要注意符号统一  如%d %d之间用空格分开两个输入值，%d,%d之间用,分割两个输入值