// WAP TO READ A NUMBMER WHICH IS NOT EQUAL TO 0. AND PRINT THE SUM OF ALL NUMBER ENTERED

#include <stdio.h>
int main()
{
    int n;
    int sum = 0;

    do{
        printf("Enter Number : ");
        scanf("%d ",&n);

        sum = sum + n ;

    }while(n!=0);
    printf("Sum Is %d :",sum);
    return 0;
}