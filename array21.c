
#include<stdio.h>
int main()
{
    int x[3][3],i,j;
    float d=0;
    printf("enter the matrix \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("\n the matrix is \n");
        for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",x[i][j]);
        }
        printf("\n");
    }

      for(i=0;i<3;i++)
      {
          d=d+(x[0][i]*(x[1][(i+1)%3] *x[2][(i+2)%3]-x[1][(i+2)%3]*x[2][(i+1)%3]));
      }

          printf("\n the inverse matrix  is \n");


          for(i=0;i<3;i++)
          {
              for(j=0;j<3;j++)
              {
                  printf("%.2f\t ",((x[(i+1)%3][(j+1)%3]*x[(i+2)%3][(j+2)%3])-(x[(i+1)%3][(j+2)%3]*x[(i+2)%3][(j+1)%3]))/d);
              }
              printf("\n");
          }



}
