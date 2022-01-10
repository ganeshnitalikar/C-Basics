// WAP TO READ AGE AND CHECK CANDIDATE IS ELIGILABE FOR BANK EXAM OR NOT
// AGE MUST BE 22 TO 30

#include <stdio.h>

int main()
{
    int age;

    printf("Enter Your Age :");
    scanf("%d",&age);

    if(age>=22 && age<=30)
    {
        printf("You Are Eligible For Exam ");
    }
    else
    {
        printf("Get Lost");
    }
}