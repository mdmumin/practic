#include<stdio.h>
#include<string.h>
#include<math.h>
#include <windows.h>



int inputBase;
int targetBase;
char input[1000];

void takeInputBase();
void takeTargetBase();
void takeInputValue();
double convertToDecimal();
void convertToTarget(int decimalValue);


int main(){

    int decimalValue;
    char c;
    system("COLOR F1");
    SetConsoleTitle("Number System Conversion");
    printf("********************************************************\n");
    printf("********************************************************\n");
    printf("*************Number System Conversion*******************\n");
    printf("********************************************************\n");
    printf("********************************************************\n");


    do {
        takeInputBase();
        takeInputValue();
        takeTargetBase();
        decimalValue=convertToDecimal();
        convertToTarget(decimalValue);
        printf("Do you want to convert Again? (y/n): ");
        scanf("%*c%c",&c);
    }while(c=='Y' || c=='y');



}

void takeInputBase(){
    printf("\n\n\nEnter Input Number's Base ( Must be between 1 to 36):  ");
    scanf("%d",&inputBase);
    while(inputBase<1 || inputBase>36){
        printf("The base Must be between 1 to 36: ");
        scanf("%d",&inputBase);
    }
}

void takeTargetBase(){
    printf("Enter Output Number's Base ( Must be between 1 to 36):  ");
    scanf("%d",&targetBase);
    while(targetBase<1 || targetBase>36){
        printf("The base Must be between 1 to 36: ");
        scanf("%d",&targetBase);
    }
}

void takeInputValue(){
    int length,i,flag=0,limit;
    printf("Enter the number which you want to convert: ");
    scanf("%s",input);
    length=strlen(input);

    for(int i=0;i<length;i++)
        {
        if(inputBase<=10){
            if(input[i]>='0' && input[i]<=('0'+inputBase-1))
                continue;
            else{
                flag=1;
                if(inputBase==1){
                    printf("Number must contain 0s only\n",inputBase-1);
                }
                else
                    printf("Number must contain 0 to %d only\n",inputBase-1);
                break;
            }
        }
        else{
            if(input[i]>='0' && input[i]<='9')
                continue;
            else if(input[i]>='A' && input[i]<=54+inputBase)
                continue;
            else if(input[i]>='a' && input[i]<=86+inputBase)
                continue;
            else{
                 flag=1;
                 if(inputBase==11)
                    printf("Number must contain 0 to 9 or A only\n",inputBase+54);
                 else
                    printf("Number must contain 0 to 9 or A to %c only\n",inputBase+54);

                 break;
            }
        }

    }
    if(flag==1)
        takeInputValue();
}
double convertToDecimal(){
    int length,i;
    double decimalValue;
    length=strlen(input);
    for(i=0;i<length;i++){
        if(input[i]>='0' && input[i]<='9'){
            decimalValue+=(input[i]-48)*pow(inputBase,length-i-1);
        }
        else if(input[i]>='A' && input[i]<='Z') {
            decimalValue+=(input[i]-55)*pow(inputBase,length-i-1);
        }
        else if(input[i]>='a' && input[i]<='z') {
            decimalValue+=(input[i]-87)*pow(inputBase,length-i-1);
        }
    }
   return (int)decimalValue;

}
void convertToTarget(int decimalValue){
    char value[1000],temp;
    int remainder,quotient,index=0,i=0,j;
    while(decimalValue!=0){
        remainder=decimalValue%targetBase;
        if(remainder<=9)
            value[index]=remainder+48;
        else if(remainder>9 && remainder<36)
            value[index]=remainder+55;
        index++;
        decimalValue/=targetBase;
    }
    value[index]='\0';
    j=strlen(value)-1;
    while(i<j){
        temp=value[i];
        value[i]=value[j];
        value[j]=temp;
        i++;
        j--;
    }
    printf("\nConverted Value in %d base is: %s\n\n\n",targetBase,value);
}

