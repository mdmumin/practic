#include<stdio.h>
int main()
{
    int a=100,ab=50,b=20,c=10,d=5,e=2,f=1,n,x;

    scanf("%d",&n);
    printf("%d\n",n);

    if(a<=n)
    {
        x=n/a;
        printf("%d nota(s) de R$ %d,00\n",x,a);
        n=n%a;

    }
    else
    {
        x=0;
        printf("%d nota(s) de R$ %d,00\n",x,a);
    }
    if(ab<=n)
    {
        x=n/ab;
        printf("%d nota(s) de R$ %d,00\n",x,ab);
        n=n%ab;

    }
    else
    {
        x=0;
        printf("%d nota(s) de R$ %d,00\n",x,ab);
    }
     if(b<=n)
    {
        x=n/b;
        printf("%d nota(s) de R$ %d,00\n",x,b);
        n=n%b;

    }
    else
    {
        x=0;
        printf("%d nota(s) de R$ %d,00\n",x,b);
    }
     if(c<=n)
    {
        x=n/c;
        printf("%d nota(s) de R$ %d,00\n",x,c);
        n=n%c;
    }
    else
    {
        x=0;
        printf("%d nota(s) de R$ %d,00\n",x,c);
    }

     if(d<=n)
    {
        x=n/d;
        printf("%d nota(s) de R$ %d,00\n",x,d);
        n=n%d;
    }
    else
    {
        x=0;
        printf("%d nota(s) de R$ %d,00\n",x,d);
    }
     if(e<=n)
    {
        x=n/e;
        printf("%d nota(s) de R$ %d,00\n",x,e);
        n=n%e;
    }
    else
    {
        x=0;
        printf("%d nota(s) de R$ %d,00\n",x,e);
    }
    if(f<=n)
    {
        x=n/f;
        printf("%d nota(s) de R$ %d,00\n",x,f);
        n=n%f;
    }
    else
    {
        x=0;
        printf("%d nota(s) de R$ %d,00\n",x,f);
    }


    return 0;

}
