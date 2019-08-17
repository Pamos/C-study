## (C语言经典程序100例)【程序1】
----

### 题目：编写一个程序，一行行地读取输入行，直至到达文件尾。算出每行输入行的长度，然后把最长的那行打印出来。为了简单起见，你可以假定所有的输入行均不超过1000个字符。

----


### code

*#include <stdio.h>*

*#include <string.h>*

*#define MAX 1000*
 

     int main(void)
    {
	unsigned  int i;
	char  ch;
	char input[MAX],output[MAX];
	
	/*
	**输入字符，当getchar返回EOF时，结束输入 
	*/
	while( (ch = getchar()) != EOF )
	   {
		for( i = 0;ch != '\n';i++ )
		{
			input[i] = ch;
			ch = getchar();
		}
		if( strlen(output) < strlen(input) )
		strcpy( output,input );
	    }
	
	printf("Is the longest string：%s\nlenth：%d\n",output,strlen(output));
	
	return 0;
    }

----

### tips


1.getchar()函数是从键盘上读入字符，并带回显；

2.输入字符的过程中，getchar()函数一直等待输入'\n'，结束读取字符

3.getchar函数的返回值为它读取的字符

4.关于EOF

计算机术语，缩写通常为EOF（End Of File），在操作系统中表示资料源无更多的资料可读取。资料源通常称为档案或串流。
在C语言中，或更精确地说成C标准函数库中表示文件结束符（end of file）。在while循环中以EOF作为文件结束标志，这种以EOF作为文件结束标志的文件，必须是文本文件。在文本文件中，数据都是以字符的ASCII代码值的形式存放。我们知道，ASCII代码值的范围是0~255，不可能出现-1，因此可以用EOF作为文件结束标志。
在 UNIX中， EOF表示能从交互式 shell (终端) 送出 Ctrl+D (习惯性标准)。在微软的 DOS 与 Windows 中能送出 Ctrl+Z。在某些例子处理纯文字档案或从"字元设备"读入资料，微软MS-DOS的 shell 或系统程序会加入ASCIIControl-Z 字元到磁碟档案结束处 (尽管基本核心MSDOS.SYS档案写入呼叫从未附加 Control-Z)。这是向下相容于一些奇特的 CP/M 功能，从CP/M 档案系统只能就记录的档案长度分配多少 128 位元 "记录"。MS-DOS 档案系统从一开始就能精确的记录档案的位元长度。
由以上描述的getchar函数的特性，所以采取getchar函数作为读取字符的入口，使用while循环可以按行不停的输入每行字符串(getchar函数遇到\n后，暂时结束读取字符，直至把之前读取的所有字符返回才重新开始读取)，当输入EOF(在windows环境下的gcc（DEV-C++）中，输入Ctrl + z可以得到EOF。在Linux环境下的gcc中，输入Ctrl + d可以得到EOF)时，while的条件语句为假，则结束行输入。
在while循环内部，将一次行输入的所有字符存放在temp数组中，存储完毕后，把temp数组的字符串长度和Len数组中的字符串长度进行比较，当前者的长度大于后者的长度时，将前者temp中的字符串copy到Len数组中，丢弃之前Len中的字符串，这样Len数组中就一直保存着长度最大的字符串。直到当while循环不再满足循环条件时，将Len中的字符串打印出来。
