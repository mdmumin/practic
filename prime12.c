//#include<stdio.h>
int main()
{
    int a,n,b,i;
    scanf("%d",&n);
    for(i=0;i<n; i++)
    {
        b=n%2;
        if(b==0)
        {
            printf("prime number %d",i);
        }
        else
        {
            printf(" not prime %d",i);
        }
    }
}
