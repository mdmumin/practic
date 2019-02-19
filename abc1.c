#include<stdio.h>
int main()
{
    char a,b,c,d,x,y,i,n,e,f,g,h,l,cx,dx;
    int length;
    c=90;
    d=64;
    cx=122;
    dx=96;
    scanf("%c %c %c %c %c",&a,&e,&f,&g,&h);

    if(64<a&&90>=a)
    {
        b=a+4;
        if(90>=b)
        {
        printf("the value is Capital alphabet it's position is- %c",b);
        l=b-4;
        printf("%C",l);
        }
        else
        {
        x=b-c;
        y=d+x;
        printf("the value is Capital alphabet it's position is- %c",y);
        }

    }
    if(64<e&&90>=e)
    {
        b=e+4;
        if(90>=b)
        {
        printf("%c",b);
        }
        else
        {
        x=b-c;
        y=d+x;
        printf("%c",y);
        }

    }
    if(64<f&&90>=f)
    {
        b=f+4;
        if(90>=b)
        {
        printf("%c",b);
        }
        else
        {
        x=b-c;
        y=d+x;
        printf("%c",y);
        }

    }
    if(64<g&&90>=g)
    {
        b=g+4;
        if(90>=b)
        {
        printf("%c",b);
        }
        else
        {
        x=b-c;
        y=d+x;
        printf("%c",y);
        }

    }
    if(64<h&&90>=h)
    {
        b=h+4;
        if(90>=b)
        {
        printf("%c",b);
        }
        else
        {
        x=b-c;
        y=d+x;
        printf("%c",y);
        }

    }


     else if(97<=a&&122>=a)
    {
        b=a+4;
        if(122>=b)
        {
        printf("the value is Capital alphabet it's position is- %c",b);
        l=b-4;
        printf("%C",l);
        }
        else
        {
        x=b-cx;
        y=dx+x;
        printf("the value is Capital alphabet it's position is- %c",y);
        }

    }
    if(96<e&&122>=e)
    {
        b=e+4;
        if(122>=b)
        {
        printf("%c",b);
        }
        else
        {
        x=b-cx;
        y=dx+x;
        printf("%c",y);
        }

    }
    if(96<f&&122>=f)
    {
        b=f+4;
        if(122>=b)
        {
        printf("%c",b);
        }
        else
        {
        x=b-cx;
        y=dx+x;
        printf("%c",y);
        }

    }
    if(96<g&&122>=g)
    {
        b=g+4;
        if(122>=b)
        {
        printf("%c",b);
        }
        else
        {
        x=b-cx;
        y=dx+x;
        printf("%c",y);
        }

    }
    if(96<h&&122>=h)
    {
        b=h+4;
        if(122>=b)
        {
        printf("%c",b);
        }
        else
        {
        x=b-cx;
        y=dx+x;
        printf("%c",y);
        }

    }
    else
        printf("this is a not alphabet");

    return 0;
}
