//DESIGN A FUNCTION LARGESTSTRNG() WHICH WILL READ TWO STRING AND FIND LARGEST STRING.

#include <stdio.h>

void largestString()
{
    int count1=0,count2=0,i,j;
    char str1[10];
    char str2[10];

    printf("Enter First String :");
    gets(str1);

    printf("Enter Second String :");
    gets(str2);

    i = 0;
    while(str1[i]!='\0')
    {
        printf("%c",str1[i]);
        count1++;
        i++;
    }

    printf("\n");


    j=0;
    while(str2[j]!='\0')
    {
        printf("%c",str2[j]);
        count2++;
        j++;
    }

    if(count1>count2)
    {
        printf("\nLargest String Is %s",str1);
    }
    else
    {
        printf("\nLargest String Is : %s",str2);
    }

}

int main()
{

    largestString();
    return 0;

}