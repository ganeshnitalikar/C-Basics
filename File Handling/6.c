// WAP TO READ CUSTOMER NAME, PRODUCT NAME, RATE , QUANTITY AND CALCULATE THE BILL AMOUNT AND WRITE ALL DATA INSIDE FILE.

#include <stdio.h>
#include <string.h>
int main()
{
    FILE *f;
    int rate, qty, bill, ch, tbill = 0;
    char cname[20], pname[30];
    printf("\nEnter The Customer Name : ");
    scanf("%s", &cname);

    strcat(cname, ".txt");

    f = fopen(cname, "a");

    do
    {

        printf("\nEnter The Product Name : ");
        scanf("%s", &pname);

        printf("\nEnter The Rate Of Product: ");
        scanf("%d", &rate);

        printf("\nEnter The Quantity Of Product : ");
        scanf("%d", &qty);

        bill = rate * qty;

        fprintf(f, "Customer Name : %s", cname);
        fprintf(f, "\nProduct Name : %s", pname);
        fprintf(f, "\nRate : %d", rate);
        fprintf(f, "\nQuantity : %d", qty);
        fprintf(f, "\nBill Amount : %d\n\n", bill);
        tbill = tbill + bill;
        fprintf(f, "\nTotal Bill Amount Is %d\n", tbill);
        fprintf(f, "\t\t-------------------\t\t\n\n");

        printf("\n\t\t\tFile Created Successfully :)\t\t\t\n");

        printf("\nDo You Want To Continue");
        printf("\n1.Continue");
        printf("\n2.Exit\n");
        scanf("%d", &ch);

    } while (ch == 1);

    printf("\nAll Details Saved");
    return 0;
}