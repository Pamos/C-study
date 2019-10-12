#关于getcher()&putchar()  和  gets()&puts()

----

###   getchar()函数从屏幕读取下一个可用的字符，并把它返回为一个整数。这个函数在同一时间内只会读取一个单一的字符。可以在循环内使用这个方法，以便从屏幕读取多个字符；
----

###
putchar(void)函数可以把字符输出到屏幕上，并返回相同的字符。这个字符在同一时间内只会输出一个单一的字符。可以在循环内使用这个方法，以便在屏幕上输出多个字符；
----

####    eg1:

    #include<stdio.h>
    int main()
    {
	  int c;
	  printf("Enter a value:");
	  c=getchar();
	  printf("\nYou entered:");
	  putchar(c);
	  printf("\n");
	  return 0;
    }
----

####    running

    [root@host caoqh]# gcc -o test test.c
    [root@host caoqh]# ./test
    please enter a value:
    s
    you entered:
    s
----

### 
char*gets(char*s)函数从stdin读取一行到s所指的缓冲区，直到一个终止符或EOF。
----

###
int puts(const char*)函数把字符串s和一个尾随的换行符写入到stdout.
----

####   eg2:

    #include<stdio.h>
    int main()
    {
	  char str[100];
	  printf("Enter a value:\n");
	  gets(str);
	  printf("You entered:");
	  puts(str);
	  return 0;
    }
----

####    running
    [root@host caoqh]# ./test
    Enter a value:
    out!
    You entered:out!
----

##    problems:
###in eg2 ,when I compiled it,System showed me:
    [root@host caoqh]# gcc -o test test.c
    /tmp/ccaE4pHz.o: In function `main':
    test.c:(.text+0x1d): warning: the `gets' function 
    is dangerous and should not be used.
----

##    关于终止符 
Windows 中是 Ctrl+z;
Linux/Unix中是Ctrl+d;    