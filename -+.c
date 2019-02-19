#include<stdio.h>
int main()
{
    char a,b;
    scanf("%C",&a);
    if(64<a&&90>=a)
    {
        printf("the value is Capital alphabet");
    }
    else if(97<=a&&122>=a)
    {
        printf("The value is Small alphabet ");
    }
    else if(48<=a&&57>=a)
    {
        printf("The value is Digit number  ");
    }

    else
    {
        printf("the value is spacial character ");
    }
    return 0;
}
