#include<stdio.h>
int main()
{
    float a,b,c,d,xy;
    float l=1.00,lx=2.00,ly=3.00,lz=3.50,la=4.00;
    printf("Enter the 1st subject credit :");
    scanf("%f",&a);
    printf("Enter the marks :");
    scanf("%f",&b);
    c=39;
    d=49;

    if(39<b&&50>b)
    {
        xy=l*a;
        //printf("%.2f",xy);
    }
    printf("%.2f",xy);

    return 0;

}
