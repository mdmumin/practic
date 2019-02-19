#include<stdio.h>
int main()
{
    int i,j,n,c=0,l;
    char a[100],b[100];
    gets(a);
    l=strlen(a);
    j=0;



    for( n=0; n<=l; n++)
    {
      for(i=n+1; i<l; i++)
        if(a[n]==a[i])
      {
          a[i]=NULL;
      }


        if(a[n]!=NULL)
     {
          b[j]=a[n];
          j++;
          c++;
     }


   }
          for(i=0; i<c; i++)
    {
        printf("%c\n",b[i]);
    }

    return 0;
}
