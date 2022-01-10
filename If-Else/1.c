// WAP TO READ AGE AND CHECK CANDITATE IS ELIGIBLE FOR VOTING OR NOT

#include <stdio.h>

int main()
{
    int age;

    printf("Enter Your Age :");
    scanf("%d",&age);
    if (age>=18)
    {
        printf("You are eligible ");
    }
    else
    {
        printf("Not Eligible");
    }
    return 0;
}