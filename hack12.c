#include<stdio.h>
int main()
{
    int n,x,i,result;
    x=10;
    scanf("%d",&n);
    for(i=1;i<=x;i++)
    {
        result=n*i;
        printf("%d x %d = %d\n",n,i,result);
    }
    return 0;
}
