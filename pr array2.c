#include<stdio.h>
int main()
{
    int a[100],ab[100];
    int i,j,n,k,sear,m;
    k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

        printf("a[%d]=",i);
        scanf("%d",&a[i]);

    }
    printf("\n\n");

    for(i=n-1;i>=0;i--)
        {
            printf("%d\n",a[i]);
            ab[k]=a[i];
            a[i]=0;
            k++;
        }
       for(j=0;j<n;j++)
        {
            a[j]=ab[j];
            //printf("a[%d] = %d\n",j,a[j]);
        }
}
