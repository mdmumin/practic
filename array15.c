 #include<stdio.h>
int main()
{
        int i,j,k=0,temp,array[10],b;



    for( i=0; i<10; i++)
    {
        scanf("%d",&array[i]);

    }
    for(i=0; i<10; i++)
    {
     for(j=i+1; j<10; j++)
    {
        if(array[i]>array[j])
        {

            b=array[i];
        array[i]=array[j];
        array[j]=b;
        }
      }
    }
      for(i=0; i<10; i++)
    {
        printf(" %d\n",array[i]);
    }
    printf("\n");
    return 0;


}
