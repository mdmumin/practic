#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b&&a<c)
    {
        printf("minimum number is a:%d",a);
    }
    else if(b<a&&b<c)
    {
        printf("minimum number is b:%d",b);
    }

    else
        printf("minimum number is b: %d",c);

}
