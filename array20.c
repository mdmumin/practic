#include<stdio.h>
#include<string.h>
int main()
{
    char str[10][100];
    int n,i;

    scanf("%d%*c",&n);

    for(i=0; i<n; i++)
    {
        gets(str[i]);

    }
    for(i=0; i<n; i++)
    {
        printf("%s\n", str[i]);

    }
    return 0;
}
