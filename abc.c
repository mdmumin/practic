#include<stdio.h>
int main()
{
    char a,b;
    scanf("%c",&a);
    if(64<a&&90>=a)
    {
        b=a-64;
        printf("the value is Capital alphabet it's position is- %d",b);
    }
    else if(97<=a&&122>=a)
    {
        b=a-96;
        printf("The value is Small alphabet it's position is - %d ",b);
    }
    else
        printf("this is a not alphabet");

    return 0;
}
