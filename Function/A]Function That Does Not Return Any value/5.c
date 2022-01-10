// DESIGN A FUNCTION BILL() WHICH WILL PRINT PRODUCT BILL BY PASSING RATE AND QUANTITY AS AN ARGUMENT TO THE FUNCTION AS FROM THE USER.

#include <stdio.h>

void bill(int rate, int qty)
{
    int tbill;

    tbill = rate*qty;

    printf("\nProduct Bill : %d",tbill);
}
int main()
{
    int rate,qty;

    printf("\nEnter Rate");
    scanf("%d",&rate);

    printf("\nEnter Quantity");
    scanf("%d",&qty);

    bill(rate,qty);

    return 0;

}                    