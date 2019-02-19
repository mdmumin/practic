#include<stdio.h>
int main()
{
    int  x[3][3],y[3][3],z[3][3],i,j,sum,multiply,k;
    printf(" Enter the 1st matrix \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
        printf(" Enter the 2nd matrix \n");

        for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&y[i][j]);
        }
    }



    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        sum=0;
                for(k=0; k<3; k++)
        {
        sum=sum+ x[i][k]*y[k][j];
        }
        multiply[i][j]= sum;
        printf("%d", multiply[i][j]);
    }
    printf("\n");
    }




 return 0;

}
