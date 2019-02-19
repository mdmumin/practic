#include<stdio.h>
#include<math.h>
int main()

{
    double meal,tip,tax,total;

    int b,c;
    scanf("%lf",&meal);


    scanf("%d %d",&b,&c);

     tip= (meal*b)/100;
     tax = (meal*c)/100;


    total = (meal+tip+tax);
    printf("The total meal cost is %.0lf dollars.",round(total));


    return 0;
}
