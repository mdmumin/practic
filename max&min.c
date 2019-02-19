#include<stdio.h>
int main()
{
    int a,b,c,max,mini,d;
    float e;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("maximum number is a:%d\n",a);
        max=a;
    }
    else if(b>a&&b>c)
    {
        printf("maximum number is b:%d\n",b);
        max=b;
    }

    else
    {
        printf("maximum number is b: %d\n",c);
    }

     if(a<b&&a<c)
    {
        printf("minimum number is a:%d\n",a);
        mini=a;
    }
    else if(b<a&&b<c)
    {
        printf("minimum number is b:%d\n",b);
        mini=c;
    }

    else
    {
        printf("minimum number is b: %d\n",c);
        mini=c;
    }
    d=max+mini;
    e=(float)d/2;
    printf("sum maximum and minimum: %d\n",d);
    printf("avg maximum and minimum: %.3f\n",e);
    return 0;
}
