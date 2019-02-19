#include<stdio.h>

int main()

{
    int sallary;

    printf("about your sallary");

    scanf("%d", &sallary);

    if(sallary>45000)
        printf("%d i am a agree",sallary);
    else if(sallary>=35000 && sallary<=45000)

        printf("%d I thinking about you",sallary);

    else
        printf("%d i am not agree",sallary);




    return 0;
}
