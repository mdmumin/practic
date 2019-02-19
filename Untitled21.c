#include<stdio.h>

int main()

{
    int x,y,sum=0,div=1;
    float fdiv;

    printf("\Enter the first number:");

    scanf("%d", &x);

    printf("\Enter the second number:");

    scanf("%d", &y);

    sum=x+y;
    div=x/y;
    fdiv=(float)x/y;

    printf("\n%d",sum);

    printf("\n%.2f (float)",fdiv);


    return 0;


}
