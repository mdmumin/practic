
#include <stdio.h>

int sum(int a,int b)
{
    int d;
    d=a+b;
    return d;
}
int func(int a,int b)
{
    int d;
    d=a-b;
    return d;
}
int main()
{
    int a=56,b=78;
    printf(" %d",sum(a,b));
    printf(" %d",func(a,b));

     return 0;
}
