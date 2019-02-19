#include<stdio.h>
int main()
{
    float a,b,c,d,n,x,y,z,i,j,k;
    float ay=50,by=100,cy=250;
    float ax,bx;
    ax=100;
    bx=20;
    a=0.50;
    b=0.75;
    c=1.20;
    d=1.50;
    x=20;
    scanf("%f",&n);
    if(ay>=n)
    {
        z=n*a;
        i=bx/ax;
        j=i*z;
        k=j+z;
        printf("%.4f\n",k);
    }
    if(by>=n)
    {
        z=n*b;
        i=bx/ax;
        j=i*z;
        k=j+z;
        printf("%.4f\n",k);
    }
    if(cy>=n)
    {
        z=n*c;
        i=bx/ax;
        j=i*z;
        k=j+z;
        printf("%.4f\n",k);
    }
    if(cy<n)
    {
        z=n*d;
        i=bx/ax;
        j=i*z;
        k=j+z;
        printf("%.4f\n",k);
    }

    return 0;
}
