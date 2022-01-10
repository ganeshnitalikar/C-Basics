// DESIGN A FUNCTION PAYMENT WHICH WILL RETURN PAYEMENT OF EMPLOYEE BY PASSING WAGES AND WDAYS AS ARGUMENT TO THE FUNCTION FROM USER

#include <stdio.h>
int payment(int wages, int wdays)
{
    int pay;
    pay = wages * wdays;
    return pay;
}


int main()
{
    int wages, wdays, em1, em2;


    printf("\nEnter The Wage ");
    scanf("%d", &wages);

    printf("\nEnter The Working Days");
    scanf("%d", &wdays);

    em1 = payment(wages, wdays);
    printf("\nPayemtn of Employee 1 : %d", em1); //payment of emp 1


    printf("\nEnter The Wage ");
    scanf("%d", &wages);

    printf("\nEnter The Working Days");
    scanf("%d", &wdays);

    em2 = payment(wages, wdays);
    printf("\nPayemtn of Employee 2 : %d", em2); //payment of emp 2

    
    return 0;
}