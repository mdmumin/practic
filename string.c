#include<stdio.h>
#include<string.h>
int main()
{ char str[20];
int i,j,flag=0;
gets(str);
i=0;
j=strlen(str)-1;
while(i<j)
{
    if(str[i]!=str[j])
    {
        printf("not palindrome:\n");
        flag=1;
        break ;
    }
    i++;
    j--;

}
if(flag==0)
{
    printf("palindrome :");
}

return 0;
}
