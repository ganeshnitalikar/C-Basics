// DESIGN A FUNCTION TAX_FUN() WHICH WILL PRINT TAX AMOUNT (20%) AND CALL THIS FUNCTION IF PAYMENT MORE THAN 20000 AND READ WAGES AND WDAYS FROM USER AND CALCULATE THE PAYMENT

#include <stdio.h>

void tax_fun(int pay)
{
    float tax,tpay;

    tax = pay*0.20;

    printf("\nYour Tax Is %f",tax);

    tpay = pay-tax ;

    printf("\nYour PayMent Is %f",tpay);


}

int main()
{
    int wg,wd,pay;

    printf("\nEnter Wage And Days ");
    scanf("%d %d",&wg,&wd);

    pay = wg*wd;

    printf("\nYour Payment Is %d",pay);

    if(pay>=20000){
        tax_fun(pay);
    }
    else{
        printf("\nNo Taxes For You");
    }
    return 0;
}