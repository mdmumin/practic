
#include<stdio.h>


void convert_to_bin(int num)
{
    int bin[16];
	int i,m=0;
    FILE *fp;
    fp = fopen("E:\\cal.txt","w");
	while(num !=0)
	{
	bin[m]=num%2;
	m++;
	num=num/2;
	}

	printf("The binary equivalent = ");
	for(i=m-1;i>=0;i--)
		printf("%u",bin[i]);
    fprintf(fp,"%u", bin[i]);
    fclose(fp);
	getch();
}

void main()
{
	int n;

	printf("\t\t\t\t**Welcome**\n\n");
	printf("Give number to be converted to binary :- ");
	scanf("%d",&n);
	convert_to_bin(n);
}


