#include<stdio.h>
int main()
{
    float a,b,c,ax,ay,bx,by,n,nx,ny,i,k,j,xy,yx,zy;
    float l=1.00,lx=2.00,ly=3.00,lz=3.50,la=4.00;
    printf("Enter the 1st subject credit :");
    scanf("%f",&a);
    printf("Enter the marks :");
    scanf("%f",&b);

    if(100<=b)
    {
        printf("wrong information:: plz try again \n");
    }

    else if(39<b&&50>b)
    {
        xy=l*a;
    }
    else if(49<b&&59>=b)
    {
        xy=lx*a;
    }
    else if(59<b&&69>=b)
    {
        xy=ly*a;
    }
    else if(69<b&&79>=b)
    {
        xy=lz*a;
    }
    else if(79<b)
    {
        xy=la*a;
    }

    else
    {
        xy=0;
    }

    printf("Enter the 2nd subject credit :");
    scanf("%f",&ax);
    printf("Enter the marks :");
    scanf("%f",&bx);
     if(100<=bx)
    {
        printf("wrong information:: plz try again \n");
    }

    else if(39<b&&50>b)
    {
        yx=l*ax;
    }
    else if(49<bx&&59>=bx)
    {
        yx=lx*ax;
    }
    else if(59<bx&&69>=bx)
    {
        yx=ly*ax;
    }
    else if(69<bx&&79>=bx)
    {
        yx=lz*ax;
    }
    else if(79<bx)
    {
        yx=la*ax;
    }
    else
    {
        yx=0;
    }

    printf("Enter the 3rd subject credit :");
    scanf("%f",&ay);
    printf("Enter the marks :");
    scanf("%f",&by);
     if(100<=by)
    {
        printf("wrong information:: plz try again \n");
    }
    else if(39<b&&50>b)
    {
        zy=l*ay;
    }
    else if(49<by&&59>=by)
    {
        zy=lx*ay;
    }
    else if(59<by&&69>=by)
    {
        zy=ly*ay;
    }
    else if(69<by&&79>=by)
    {
        zy=lz*ay;
    }
    else if(79<by)
    {
        zy=la*ay;
    }
    else
    {
        zy=0;
    }

    c=xy+yx+zy;
    i=a+ax+ay;
    k=c/i;



        printf("The SGPA : %.2f",k);


    return 0;
}
