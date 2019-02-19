#include<stdio.h>
int main()
{
    int i,j,array[10],k=0,temp;
    for(i=0; i<10; i++)
        {
        scanf("%d",&array[10]);
        }



        for (j=9;j>4; j--)
        {
            for(k=0; k<10; k++)
            {


            temp=array[k];
            array[k]=array[j];
            array[j]=temp;
            k++;
        }}
        for(i=0; i<10; i++)
        {
            printf("%d\n",array[i]);
        }

        printf("\n");

        return 0;
}
