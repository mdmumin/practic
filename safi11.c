 #include<stdio.h>

int main() {
   int i, arr[100], sum, num;


   printf("\nEnter no of elements :");
   scanf("%d", &num);

   for (i = 0; i < num; i++)
      scanf("%d", &arr[i]);

   sum = 0;
   for (i = 0; i < num; i++)
      sum = sum + arr[i];


   printf("%d", sum);

   return 0;
}
