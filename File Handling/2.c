// WAP TO READ PNAME, RATE, QTY,  AND CALCULATE BILL AMOUNT.CREATE FILE BILLING.TXT

#include <stdio.h>
int main()
{
    FILE *fp;
    char pname[10];
    int rate, qty, bill;

    fp = fopen("Billing.txt", "w");

    printf("Enter The Name Of Product");
    scanf("%s", &pname);

    fprintf
}