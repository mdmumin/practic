#include<stdio.h>
int main()
{
    int a[100],ab[100];
    int i,j,n,k,sear,m;

    scanf("%d",&n);


    for(i=0;i<n;i++)
    {
        k=i;
        printf("a[%d]=",k);
        scanf("%d",&a[i]);

    }
    for(j=0;j<n; j++)
    {
        ab[j]=a[j];
        a[j]=0;
    }
    printf("\n\n");
    for(j=0;j<n;j++)
    {

        printf("ab[%d]= %d\n",j,ab[j]);
    }
    return 0;
}
