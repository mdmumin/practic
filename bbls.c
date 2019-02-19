#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x[n],i,j,temp,swap=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);

    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(x[j]>x[j+1])
            {
              temp=x[j] ;
              x[j] =x[j+1];
              x[j+1]=temp;
              swap=1;
            }

        }
        if(swap==1)
        {
            continue;

        }
        else
        {
            break;
        }


    }
        for(i=0;i<n;i++)
    {
        printf("%d  ",x[i]);

    }

}

