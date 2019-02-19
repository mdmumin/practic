#include<stdio.h>
int main()
{
    int a,b,c,d,e,h;
    scanf("%d %d %d",&a,&b,&c);
    switch(a)
    {
    case 1:
        d=b+c;
        printf("\n%d",d);
        break;
    case 2:
        e=b-c;
        printf("\n%d",e);
        break;
    case 3:
        h=a*b;
        printf("\n%d",h);
        break;
    default :
        printf("unknown");
        break;

    }


    return 0;
}
