#include<stdio.h>
int main()
{
    int a=50,b=20,c=10,d=5,e=2,f=1,n,x,y,z;
    printf("Enter the taka : ");
    scanf("%d",&n);

    if(a<=n)
    {
        x=n/a;
        printf("%d taka need : %d\n",a,x);
        n=n%a;

    }
     if(b<=n)
    {
        x=n/b;
        printf("%d taka need : %d\n",b,x);
        n=n%b;
    }
     if(c<=n)
    {
        x=n/c;
        printf("%d taka need : %d\n",c,x);
        n=n%c;
    }
     if(d<=n)
    {
        x=n/d;
        printf("%d taka need : %d\n",d,x);
        n=n%d;
    }
     if(e<=n)
    {
        x=n/e;
        printf("%d taka need  : %d\n",e,x);
        n=n%e;
    }
    if(f<=n)
    {
        x=n/f;
        printf("%d taka need  : %d\n",f,x);
        n=n%f;
    }

    return 0;

}
