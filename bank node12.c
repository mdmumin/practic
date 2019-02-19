#include<stdio.h>
int main()
{
    int a=50,b=20,c=10,d=5,e=2,f=1,n,x,y,z;
    int ax=3,bx=5,cx=30,dx=40,ex=45,fx=10;
    printf("Enter the taka : ");
    scanf("%d",&n);

    if(a<=n)
    {
        x=n/a;
        if(ax<=x)
        {
            printf("%d is node %d\n",a,ax);
            y=x-ax;
            z=y*a;
            n=n%a;
            n=n+z;
            printf("N is = %d\n",n);

        }
        else
        {
            printf("%d is node :%d\n",a,x);
            n=n%a;
        }
    }
     if(b<=n)
    {
        x=n/b;
        if(bx<=x)
        {
            printf("%d is node %d\n",b,bx);
            y=x-bx;
            z=y*b;
            n=n%b;
            n=n+z;
            printf("N is = %d\n",n);

        }
        else
        {
            printf("%d is node :%d\n",b,x);
            n=n%b;
        }

    }
    if(c<=n)
    {
        x=n/c;
        if(cx<=x)
        {
            printf("%d is node %d\n",c,cx);
            y=x-cx;
            z=y*c;
            n=n%c;
            n=n+z;
            printf("N is = %d\n",n);

        }
        else
        {
            printf("%d is node :%d\n",c,x);
            n=n%c;
        }

    }
    if(d<=n)
    {
        x=n/d;
        if(dx<=x)
        {
            printf("%d is node %d\n",d,dx);
            y=x-dx;
            z=y*d;
            n=n%d;
            n=n+z;
            printf("N is = %d\n",n);

        }
        else
        {
            printf("%d is node :%d\n",d,x);
            n=n%d;
        }

    }
    if(e<=n)
    {
        x=n/e;
        if(ex<=x)
        {
            printf("%d is node %d\n",e,ex);
            y=x-ex;
            z=y*e;
            n=n%e;
            n=n+z;
            printf("N is = %d\n",n);

        }
        else
        {
            printf("%d is node :%d\n",e,x);
            n=n%e;
        }

    }
    if(f<=n)
    {
        x=n/f;
        if(fx<=x)
        {
            printf("%d is node %d\n",f,fx);
            y=x-fx;
            z=y*f;
            n=n%f;
            n=n+z;
            printf("N is = %d\n",n);

        }
        else
        {
            printf("%d is node :%d\n",f,x);
            n=n%f;
        }

    }

    return 0;

}
