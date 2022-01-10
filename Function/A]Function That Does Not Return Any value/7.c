// DESIGN A FUNCTION PAYMENT() WHICH WILL PRINT PAYMENT OF EMPLOYEE BY PASSING WG,WD AS ARGUMENTS TO FUNCITON FROM USER

#include <stdio.h>

void payment(int wg,int wd)
{
    int pay;

    pay = wg*wd;

    printf("\nPayment Of Employee : %d",pay);
}

int main()
{
    int wg,wd;

    printf("\nEnter Wage and Wdays Value ");
    scanf("%d %d",&wg,&wd);

    payment(wg,wd);

    return 0;
}