#include<stdio.h>
float func(int a, int b)
{
    int i,p=1,fact=1;
    float temp=1,sum=0;
    for(i=1;i<=a;i++)
    {

        fact=fact*b;
                p=p*i;
        temp=(float)fact/p;
        sum=sum+temp;
    }
    return sum;
}
int main()
{
    int n=0,x=0;
    scanf("%d",&n);
    scanf("%d",&x);

    printf("%.2f",func(n,x));
    return 0;
}
