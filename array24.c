
#include<stdio.h>
struct student{
    int roll;
    char name [20];
    char dep[20];


};
int main()
{
    struct student a;

    printf("Enter the name \n");

    scanf("%s",a.name);

    printf("Name of the student  %s\n\n",a.name);

    printf("Enter the department\n");
    scanf("%s",a.dep);
    printf("the department name is %s\n\n ",a.dep);

    printf("Enter the Roll\n\n");


    scanf("%d",&a.roll);
    printf("the roll number of the student is %d\n\n",a.roll);

}
