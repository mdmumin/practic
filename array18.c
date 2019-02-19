#include<stdio.h>
int main()
{
    char ch[10];

    int i=0;
    ch[0]='a';
    ch[1]='b';
    ch[2]='c';
    ch[3]='d';
    ch[4]='e';
    ch[5]='f';
    ch[6]='g';
    ch[7]='h';
    ch[8]='i';

      while(ch[i]!= 'f')
      {
          printf("%c",ch[i]);
          i++;
      }



return 0;
 }
