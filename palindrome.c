#include<stdio.h>
#include<string.h>
int main()
{
  char str[100], rev[100];
  gets(str);
  strcpy(rev, str);
   if(strcmp(str, strrev(rev))==0)
      printf("Palindrome");
   else
     printf("Not Palindrome");

return 0;
}
