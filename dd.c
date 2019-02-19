#include <stdio.h>
#include <string.h>

int main()
{
  char a[100];
  char i,b,x,c,y,d;
  char length;

  printf("Enter a string to calculate it's length\n");
  gets(a);

  length = strlen(a);
  for(i=0;i<length; i++)
  {
      if(64<a[i]&&90>=a[i])
    {
        b=a[i]+4;
        if(90>=b)
        {
        printf("%c",b);
        }
        else
        {
        x=b-c;
        y=d+x;
        printf("%c",y);
        }

    }
      //printf("%c",a[i]);

  }



  //printf("Length of the string = %d\n", length);
  //length=length-1;
  //printf("Length of the string = %c\n", length);


  return 0;
}
