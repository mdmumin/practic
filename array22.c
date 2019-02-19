#include<stdio.h>
#include<string.h>
int main()
{
   char x[10][50];
   int i,j,l=0;
   for(i=0;i<10;i++)
   {

       gets(x[i]);
   }
   for(i=0;i<10;i++)
   {
      l=strlen(x[i]);
      for(j=0;j<l;j++)
      {
          printf("%c",x[i][j]);
      }
      printf("\n");
   }

}
