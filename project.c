#include<stdio.h>
#include<math.h>
#include<string.h>
int main()

{
  int a,n,flag=0;
   printf("\t\t\t\tWELCOME TO NUMBER SYSTEM CONVERSION\n\n\n");
   printf("\t\t\t\t>>>>>> CHOOSE THE CONVERSION <<<<<<\n\n");
    while(flag==0){

       printf(" => Decimal <=\n");
       printf("1: Decimal to Binary.\n");
       printf("2: Decimal to Octal.\n");
       printf("3: Decimal to Hexadecimal.\n\n");
       printf(" => Binary <=\n");
       printf("4: Binary to Decimal.\n");
       printf("5: Binary to Octal.\n");
       printf("6: Binary to Hexadecimal.\n\n");
       printf(" => Octal <=\n");
       printf("7: Octal to Binary.\n");
       printf("8: Octal to Decimal.\n");
       printf("9: Octal to Hexadecimal.\n\n");
       printf(" => Hexadecimal <=\n");
       printf("10: Hexadecimal to Binary.\n");
       printf("11: Hexadecimal to Octal.\n");
       printf("12: Hexadecimal to Decimal.\n");

       printf("\nENTER YOUR CHOICE: ");
       scanf("%d",&a);

     switch(a)

    {
        case 1:
             printf("Enter Decimal number to be converted to Binary :- ");
             scanf("%d",&n);
             decimal1(n);
             break;
        case 2:
             printf("Enter Decimal number to be converted to Octal :- ");
             scanf("%d",&n);
             decimal2(n);
             break;
        case 3:
             printf("Enter Decimal number to be converted to Hexadecimal :- ");
             scanf("%d",&n);
             decimal3(n);
             break;
        case 4:
             printf("Enter Binary number to be converted to Decimal :- ");
             scanf("%d",&n);
             binary1(n);
             break;
        case 5:
             printf("Enter Binary number to be converted to Octal :- ");
             scanf("%d",&n);
             binary2(n);
             break;
        case 6:
             printf("Enter Binary number to be converted to Octal :- ");
             scanf("%d",&n);
             binary3(n);
             break;
        case 7:
             printf("Enter Octal number to be converted to Binary :- ");
             scanf("%d",&n);
             octal1(n);
             break;
         case 8:
             printf("Enter Octal number to be converted to Decimal :- ");
             scanf("%d",&n);
             octal2(n);
             break;
         case 9:
             printf("Enter Octal number to be converted to Hexadecimal :- ");
             scanf("%d",&n);
             octal3(n);
             break;
         case 10:
             printf("Enter Hexadecimal number to be converted to Binary :- ");
             hexadecimal1(n);
             break;
        case 11:
             printf("Enter Hexadecimal number to be converted to Octal :- ");
             hexadecimal2(n);
             break;
        case 12:
             printf("Enter Hexadecimal number to be converted to Decimal :- ");
             hexadecimal3(n);
             break;
        default:
            flag=1;
            break;
   } }
}

int decimal1(int num)
{
    int bin[16];
	int i,m=0;

	while(num !=0)
        {
        bin[m]=num%2;
        m++;
        num=num/2;
        }

	printf("The binary equivalent = ");
	for(i=m-1;i>=0;i--)
		printf("%u",bin[i]);
		printf("\n");

printf("\n");
}
int decimal2(int num)
{
    int bin[16];
	int i,m=0;

	while(num >0)
        {
        bin[m]=num%8;
        m++;
        num=num/8;
        }

	printf("The octal equivalent = ");
	for(i=m-1;i>=0;i--)
		printf("%u",bin[i]);

printf("\n\n");
}
int decimal3(int num)
{
    char bin[16];
	int i,m=0,x=0;

	while(num >0)
	{
	     x=num%16;
	    switch(x)
	    {
        case 10:
            bin[m]='A';
            m++;
            break ;
        case 11:
            bin[m]='B';
            m++;
            break;
       case 12:
            bin[m]='C';
            m++;
            break;
       case 13:
            bin[m]='D';
            m++;
            break;
       case 14:
            bin[m]='E';
            m++;
            break;
      case 15:
            bin[m]='F';
            m++;
            break;
      default:
        bin[m]=(char)x+48;
        m++;
        break;
	    }
	    num=num/16;
	}
	   printf("The hexadecimal equivalent = ");
	    for(i=m-1;i>=0;i--)
		printf("%c",bin[i]);
printf("\n\n");
}
int binary1(int num)
{
	int i,flag=0,rem,sum;
	i=0;
	sum=0;
	while(num>0)
        {
        rem=num%10;
        if(rem>1){
            flag=1;
            break;
        }
        sum=sum+rem*pow(2,i);
        num=num/10;
        i++;
        }
        if(flag==1){
              printf("invalid number \n");
              printf("Please enter 0 and 1 only\n");
            return;
        }

	printf("The Decimal equivalent = ");
		printf("%d",sum);
printf("\n\n");
}

int binary2(int num)
{
	int i,rem,sum,m=0,flag=0;
	int bin[16];
        i=0;
        sum=0;
	while(num>0)
        {
        rem=num%10;
        if(rem>1)
        {
            flag=1;
            break;
        }
        sum=sum+rem*pow(2,i);
        num=num/10;
        i++;
        }
        if(flag==1)
        {
          printf("invalid number \n");
          printf("Please enter 0 and 1 only\n");
          return;
        }
    printf("Decimal %d\n",sum);
	while(sum >0)
        {
        bin[m]=sum%8;
        m++;
        sum=sum/8;
        }
    printf("The octal equivalent = ");
	for(i=m-1;i>=0;i--)
		printf("%d",bin[i]);
printf("\n\n");
}
int binary3(int num)
{
	int i,rem,sum,m=0,x,flag=0;
	int bin[16];
	i=0;
	sum=0;
	while(num>0)
        {
        rem=num%10;
          if(rem>1)
       {
            flag=1;
            break;
       }
        sum=sum+rem*pow(2,i);
        num=num/10;
        i++;
        }
        if(flag==1)
       {
            printf("invalid number\n");
            printf("Please enter 0 and 1 only\n");
            return;
        }
    printf("Decimal %d\n",sum);

    while(sum>0)
    {
	     x=sum%16;

	    switch(x)
	    {
        case 10:
            bin[m]='a';
            m++;
            break ;
        case 11:
            bin[m]='b';
            m++;
            break;
       case 12:
            bin[m]='c';
            m++;
            break;
       case 13:
            bin[m]='d';
            m++;
            break;
       case 14:
            bin[m]='e';
            m++;
            break;
      case 15:
            bin[m]='f';
            m++;
            break;
      default:
        bin[m]=(char)x+48;
        m++;
        break;
	    }
	    sum=sum/16;
	}
	 printf("The hexadecimal equivalent = ");
	    for(i=m-1;i>=0;i--)
		printf("%u",bin[i]);
printf("\n\n");
}

int octal1(int num)
{
	int i,rem,sum,m=0,flag=0;
	int bin[16];
        i=0;
       sum=0;
	while(num>0)
        {
        rem=num%10;
         if(rem>7)
       {
            flag=1;
            break;
       }
        sum=sum+rem*pow(8,i);
        num=num/10;
        i++;
        }
          if(flag==1)
       {
            printf("invalid number\n");
            printf("Please enter 0 - 7 only\n");
            return;
       }
        printf("Decimal %d\n",sum);
        decimal1(sum);
}
int octal2(int num)
{
	int i,rem,sum,flag=0;
	i=0;
	sum=0;
	while(num>0)
        {
        rem=num%10;
         if(rem>7)
       {
            flag=1;
            break;
       }
        sum=sum+rem*pow(8,i);
        num=num/10;
        i++;
        }
          if(flag==1)
       {
            printf("invalid number\n");
            printf("Please enter 0 - 7 only\n");
            return;
        }

	printf("The Decimal equivalent = ");
		printf("%d",sum);
printf("\n\n");
}

int octal3(int num)
{
	int i,rem,sum,flag=0;
	i=0;
	sum=0;
	while(num>0)
        {
        rem=num%10;
         if(rem>7)
       {
            flag=1;
            break;
       }
        sum=sum+rem*pow(8,i);
        num=num/10;
        i++;
        }
          if(flag==1)
       {
            printf("invalid number\n");
            printf("Please enter 0 - 7 only\n");
            return;
       }
		decimal3(sum);
}

int hexadecimal1(int num)
{
    char hex[50];
    int dec=0,len,i=0,novalid=0;

    scanf("%s",hex);
    len= strlen(hex);
    while(i<len)
    {
        switch(hex[i])
        {
        case '0':
            dec=dec+ (int)pow(16,len-i-1)*0;
            break;
        case '1':
            dec=dec+ (int)pow(16,len-i-1)*1;
            break;
        case '2':
            dec=dec+ (int)pow(16,len-i-1)*2;
            break;
        case '3':
            dec=dec+ (int)pow(16,len-i-1)*3;
            break;
        case '4':
            dec=dec+ (int)pow(16,len-i-1)*4;
            break;
        case '5':
            dec=dec+ (int)pow(16,len-i-1)*5;
            break;
        case '6':
            dec=dec+ (int)pow(16,len-i-1)*6;
            break;
        case '7':
            dec=dec+ (int)pow(16,len-i-1)*7;
            break;
        case '8':
            dec=dec+ (int)pow(16,len-i-1)*8;
            break;
        case '9':
            dec=dec+ (int)pow(16,len-i-1)*9;
            break;
        case 'A':
            dec=dec+ (int)pow(16,len-i-1)*10;
            break;
        case 'B':
            dec=dec+ (int)pow(16,len-i-1)*11;
            break;
        case 'C':
            dec=dec+ (int)pow(16,len-i-1)*12;
            break;
        case 'D':
            dec=dec+ (int)pow(16,len-i-1)*13;
            break;
        case 'E':
            dec=dec+ (int)pow(16,len-i-1)*14;
            break;
        case 'F':
            dec=dec+ (int)pow(16,len-i-1)*15;
            break;
        default :
            novalid=1;
            break;
        }
        if(novalid==1)
        break;
        i++;
    }
    if(novalid==0)
    {
       decimal1(dec);
    }
    else
    {
        printf("invalid number\n");
        printf("Please enter 0-9 and A-F only ");
    }
}
int hexadecimal2(int num)
{
    char hex[50];
    int dec=0,len,i=0,novalid=0;

    scanf("%s",hex);
    len= strlen(hex);
    while(i<len)
    {
        switch(hex[i])
        {
        case '0':
            dec=dec+ (int)pow(16,len-i-1)*0;
            break;
        case '1':
            dec=dec+ (int)pow(16,len-i-1)*1;
            break;
        case '2':
            dec=dec+ (int)pow(16,len-i-1)*2;
            break;
        case '3':
            dec=dec+ (int)pow(16,len-i-1)*3;
            break;
        case '4':
            dec=dec+ (int)pow(16,len-i-1)*4;
            break;
        case '5':
            dec=dec+ (int)pow(16,len-i-1)*5;
            break;
        case '6':
            dec=dec+ (int)pow(16,len-i-1)*6;
            break;
        case '7':
            dec=dec+ (int)pow(16,len-i-1)*7;
            break;
        case '8':
            dec=dec+ (int)pow(16,len-i-1)*8;
            break;
        case '9':
            dec=dec+ (int)pow(16,len-i-1)*9;
            break;
        case 'A':
            dec=dec+ (int)pow(16,len-i-1)*10;
            break;
        case 'B':
            dec=dec+ (int)pow(16,len-i-1)*11;
            break;
        case 'C':
            dec=dec+ (int)pow(16,len-i-1)*12;
            break;
        case 'D':
            dec=dec+ (int)pow(16,len-i-1)*13;
            break;
        case 'E':
            dec=dec+ (int)pow(16,len-i-1)*14;
            break;
        case 'F':
            dec=dec+ (int)pow(16,len-i-1)*15;
            break;
        default :
            novalid=1;
            break;
        }
        if(novalid==1)
        break;
        i++;
    }
    if(novalid==0)
    {
      decimal2(dec);
    }
    else
    {
        printf("invalid number \n");
        printf("Please enter 0-9 and A-F only ");
    }
}
int hexadecimal3(int num)
{
    char hex[50];
    int dec=0,len,i=0,novalid=0;

    scanf("%s",hex);
    len= strlen(hex);
    while(i<len)
    {
        switch(hex[i])
        {
        case '0':
            dec=dec+ (int)pow(16,len-i-1)*0;
            break;
        case '1':
            dec=dec+ (int)pow(16,len-i-1)*1;
            break;
        case '2':
            dec=dec+ (int)pow(16,len-i-1)*2;
            break;
        case '3':
            dec=dec+ (int)pow(16,len-i-1)*3;
            break;

        case '4':
            dec=dec+ (int)pow(16,len-i-1)*4;
            break;
        case '5':
            dec=dec+ (int)pow(16,len-i-1)*5;
            break;
        case '6':
            dec=dec+ (int)pow(16,len-i-1)*6;
            break;
        case '7':
            dec=dec+ (int)pow(16,len-i-1)*7;
            break;
        case '8':
            dec=dec+ (int)pow(16,len-i-1)*8;
            break;
        case '9':
            dec=dec+ (int)pow(16,len-i-1)*9;
            break;
        case 'A':
            dec=dec+ (int)pow(16,len-i-1)*10;
            break;
        case 'B':
            dec=dec+ (int)pow(16,len-i-1)*11;
            break;
        case 'C':
            dec=dec+ (int)pow(16,len-i-1)*12;
            break;
        case 'D':
            dec=dec+ (int)pow(16,len-i-1)*13;
            break;
        case 'E':
            dec=dec+ (int)pow(16,len-i-1)*14;
            break;
        case 'F':
            dec=dec+ (int)pow(16,len-i-1)*15;
            break;
        default :
            novalid=1;
            break;
        }
        if(novalid==1)
        break;
        i++;
    }
    if(novalid==0)
    {
        printf("The Decimal equivalent = %d",dec);
    }
    else
    {
        printf("invalid number \n");
        printf("Please enter 0-9 and A-F only ");

    }
printf("\n\n");
}
