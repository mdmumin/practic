#include<stdio.h>
int main()
{
    float a,b,c,d,k;
    printf("the meal rate :");
    scanf("%f",&a);
    printf("total meal :");
    scanf("%f",&b);
    printf("give the taka :");
    scanf("%f",&c);
    d=a*b;
    if(d<c)
    {
        k=c-d;
        printf("take :%f",k);
    }
    else if(d>c)
    {
        k=d-c;
        printf("give :%f",k);
    }
    else
    {
       printf("give=take=0");
    }

    return 0;

}
