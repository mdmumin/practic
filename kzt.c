#include<stdio.h>
#include<string.h>
int main ()
{

    int vowel,consonant,i;
    char x [50];
    vowel=consonant=i=0;
    gets(x);

    while(x[i]!='\0')

    {
        if(x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u')
            vowel++;
        else if(x[i]>='a'&& x[i]<='z')
            consonanta++;
        i++;
    }
    printf("length:%d\n",strlen(x));
    printf("v:%d\n",vowel);
    printf("c:%d\n",consonant);

        return 0;
    }

