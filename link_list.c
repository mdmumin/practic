#include<stdio.h>
int main()
{
    int i,j,n,small_index,temp;
    printf("Enter  the side of array :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter data into array :");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[n]);

    }
    for(i=1;i<n; i++)
    {
        small_index=i;
        for(j=1;j<n;j++)
        {
            if(arr[j]<arr[small_index])
                small_index=j;

        }
        temp=arr[i];
        arr[small_index]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",temp);
    }

return 0;
}
