//WAP TO PRINT GIVEN STRING("ganesh") AND CONVERT IN TO UPPER CASE WITHOUT USING INBUILT FUNCTION.

#include<stdio.h>

int main()
{
    char name[10]="nitalikar";
    char xname[10];

    printf("The given string is: %s",name);

    int i=0;

    while(name[i]!='\0')
    {
        xname[i]=name[i]-32;

        i++;
    }

    printf("\nUpper string is: %s",xname);
}
