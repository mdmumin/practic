#include<stdio.h>

int main()

{
    int i,x,n,sum=0;
    float av=0;
    scanf("%d",&n);

   for(i=1;i<=n;i++)
    {

        printf("%d ",i);
        //sum+=i;
    }
    printf("%d",sum);
    printf("%d ",sum/n);
    return 0;
}
