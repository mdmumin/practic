#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char array[50],array2[50];
    gets (array2);
    strcpy(array,array2);
    i= strlen(array);
    printf("the lenth is %d\n",i);
    puts(array2);

    return 0;

}
