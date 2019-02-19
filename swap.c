#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);

    b=a+b;
    a=b-a;
    b=b-a;


    printf("a=%d\n",a);
    printf("b=%d",b);

    return 0;
}
