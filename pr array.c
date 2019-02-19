#include<stdio.h>
int main()
{
    int a[100];
    int i,j,n,k,sear,m;

    scanf("%d",&n);


    for(i=0;i<n;i++)
    {
        k=i;
        printf("a[%d]=",k);
        scanf("%d",&a[i]);

    }
    printf("Enter the search value :");
    scanf("%d",&sear);
    for(i=0;i<n;i++)
        {
            if(a[i]==sear)
            {
            j=i;
            a[i];
            m=1;
            break;
            }
        }
        if(m==1)
        {
            printf("The value found is a[%d] = %d\n",j,a[i]);
        }
        else
        {
            printf("not found");
        }
        getch();
    return 0;
}
