# Introduction
读取文本文件，输出最长的一行

# code

```
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 1000
#define DEFAULT_LINE_LENGTH 256

int main(int argc, char* argv[])
{
  FILE* fp;
  char *line = NULL;  
  size_t len = 0;
  ssize_t read;
  int line_num = 0;
  int longest_line_num = 0;
  ssize_t longest_line_len = 0;
  char *longest_line = NULL;

  if(argc = 1)
  {
    printf("Usage:%s <filepath>\n", argv[0]);
    return -1;
  }
  fp = fopen(argv[1], "r");
  if(!fp)
  {
    printf("[-] fopen failed: %s", argv[1]);
    return -1;
  }
  longest_line = (char*)malloc(DEFAULT_LINE_LENGTH);
  if(!longest_line)
  {
    printf("[-] malloc failed\n");
    return -1;
  }
  while ((read = getline(&line, &len, fp)) != -1) 
  {
    printf("[+] Retrieved line of length %zu:\n", read);
    printf("[%d]%s", ++line_num, line);
    if(longest_line_len < read)
    {
      longest_line_len = read;
      longest_line_num = line_num;
      if(read >= DEFAULT_LINE_LENGTH)
      {
        longest_line = realloc(longest_line, read+1);
        if(!longest_line)
        {
          printf("[-] realloc failed.\n");
          return -1;
        }
      }
      strncpy(longest_line, line, read);
      *(longest_line+read) = '\0';
    }
  }

  printf("\n\n**********************************\n");
  if(longest_line_num == 0)
  {
    printf("[+] empty file.\n");
  }
  else
  { 
    printf("[+] the longest line number is %d\n", longest_line_num);
    printf("[+] length is %d\n", longest_line_len);
    printf("[+] content is:%s\n", longest_line);
  }


  if(line)
  {
    free(line);
  }
  if(longest_line)
  {
    free(longest_line);
  }
  fclose(fp);
  

return 0;
}

```

# output
```
[root@host tmp]# gcc -o longest_text_line longest_text_line.c
[root@host tmp]# ./longest_text_line longest_text_line.c
[+] Retrieved line of length 19:
[1]#include <stdio.h>
[+] Retrieved line of length 20:
[2]#include <string.h>
[+] Retrieved line of length 20:
[3]#include <stdlib.h>
[+] Retrieved line of length 1:
[4]
[+] Retrieved line of length 17:
[5]#define MAX 1000
[+] Retrieved line of length 32:
[6]#define DEFAULT_LINE_LENGTH 256
[+] Retrieved line of length 1:
[7]
[+] Retrieved line of length 33:
[8]int main(int argc, char* argv[])
[+] Retrieved line of length 2:
[9]{
[+] Retrieved line of length 12:
[10]  FILE* fp;
[+] Retrieved line of length 23:
[11]  char *line = NULL;  
[+] Retrieved line of length 18:
[12]  size_t len = 0;
[+] Retrieved line of length 16:
[13]  ssize_t read;
[+] Retrieved line of length 20:
[14]  int line_num = 0;
[+] Retrieved line of length 28:
[15]  int longest_line_num = 0;
[+] Retrieved line of length 32:
[16]  ssize_t longest_line_len = 0;
[+] Retrieved line of length 29:
[17]  char *longest_line = NULL;
[+] Retrieved line of length 1:
[18]
[+] Retrieved line of length 16:
[19]  if(argc == 1)
[+] Retrieved line of length 4:
[20]  {
[+] Retrieved line of length 46:
[21]    printf("Usage:%s <filepath>\n", argv[0]);
[+] Retrieved line of length 15:
[22]    return -1;
[+] Retrieved line of length 4:
[23]  }
[+] Retrieved line of length 28:
[24]  fp = fopen(argv[1], "r");
[+] Retrieved line of length 10:
[25]  if(!fp)
[+] Retrieved line of length 4:
[26]  {
[+] Retrieved line of length 45:
[27]    printf("[-] fopen failed: %s", argv[1]);
[+] Retrieved line of length 15:
[28]    return -1;
[+] Retrieved line of length 4:
[29]  }
[+] Retrieved line of length 53:
[30]  longest_line = (char*)malloc(DEFAULT_LINE_LENGTH);
[+] Retrieved line of length 20:
[31]  if(!longest_line)
[+] Retrieved line of length 4:
[32]  {
[+] Retrieved line of length 35:
[33]    printf("[-] malloc failed\n");
[+] Retrieved line of length 15:
[34]    return -1;
[+] Retrieved line of length 4:
[35]  }
[+] Retrieved line of length 51:
[36]  while ((read = getline(&line, &len, fp)) != -1) 
[+] Retrieved line of length 4:
[37]  {
[+] Retrieved line of length 57:
[38]    printf("[+] Retrieved line of length %zu:\n", read);
[+] Retrieved line of length 40:
[39]    printf("[%d]%s", ++line_num, line);
[+] Retrieved line of length 32:
[40]    if(longest_line_len < read)
[+] Retrieved line of length 6:
[41]    {
[+] Retrieved line of length 31:
[42]      longest_line_len = read;
[+] Retrieved line of length 35:
[43]      longest_line_num = line_num;
[+] Retrieved line of length 38:
[44]      if(read >= DEFAULT_LINE_LENGTH)
[+] Retrieved line of length 8:
[45]      {
[+] Retrieved line of length 54:
[46]        longest_line = realloc(longest_line, read+1);
[+] Retrieved line of length 26:
[47]        if(!longest_line)
[+] Retrieved line of length 10:
[48]        {
[+] Retrieved line of length 43:
[49]          printf("[-] realloc failed.\n");
[+] Retrieved line of length 21:
[50]          return -1;
[+] Retrieved line of length 10:
[51]        }
[+] Retrieved line of length 8:
[52]      }
[+] Retrieved line of length 41:
[53]      strncpy(longest_line, line, read);
[+] Retrieved line of length 35:
[54]      *(longest_line+read) = '\0';
[+] Retrieved line of length 6:
[55]    }
[+] Retrieved line of length 4:
[56]  }
[+] Retrieved line of length 1:
[57]
[+] Retrieved line of length 54:
[58]  printf("\n\n**********************************\n");
[+] Retrieved line of length 67:
[59]  printf("[+] the longest line number is %d\n", longest_line_num);
[+] Retrieved line of length 50:
[60]  printf("[+] length is %d\n", longest_line_len);
[+] Retrieved line of length 47:
[61]  printf("[+] content is:%s\n", longest_line);
[+] Retrieved line of length 1:
[62]
[+] Retrieved line of length 11:
[63]  if(line)
[+] Retrieved line of length 4:
[64]  {
[+] Retrieved line of length 16:
[65]    free(line);
[+] Retrieved line of length 4:
[66]  }
[+] Retrieved line of length 19:
[67]  if(longest_line)
[+] Retrieved line of length 4:
[68]  {
[+] Retrieved line of length 24:
[69]    free(longest_line);
[+] Retrieved line of length 4:
[70]  }
[+] Retrieved line of length 14:
[71]  fclose(fp);
[+] Retrieved line of length 3:
[72]  
[+] Retrieved line of length 1:
[73]
[+] Retrieved line of length 10:
[74]return 0;
[+] Retrieved line of length 2:
[75]}


**********************************
[+] the longest line number is 59
[+] length is 67
[+] content is:  printf("[+] the longest line number is %d\n", longest_line_num);
```
