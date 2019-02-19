#include<stdio.h>

int main()

{
    int n1,n2,num=0,gcd;
    printf("Enter the 1st number  ");
    scanf("%d",&n1);

    printf("Enter the 2nd number  ");
    scanf("%d", &n2);

    while(n2!=0)
    {
        num=n1%n2;
        n1=n2;
        n2=num;
    }
    gcd=n1;
    printf("The GCD Number %d", gcd);



return 0;
}
