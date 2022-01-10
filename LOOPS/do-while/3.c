// WAP TO READ PRODUCT NAME,RATE AND QUANTITY AND  CALCULATE THE BILL AMOUNT FOR MULTIPLE PRODUCT AND DISPLAY BILL OF EACH PRODUCT AND ALSO DISPLAY TOTAL OF ALL PRODUCTS 
#include <stdio.h>
int main()
{
    char pname[10];
    int rate,qty,ch;
    int bill,fbill =0;

    do{
        printf("Enter The Product Name ");
        scanf("%s",&pname);

        printf("Enter Product Rate :");
        scanf("%d",&rate);

        printf("Enter The Product Quantity :");
        scanf("\n%d",&qty);

        bill = rate*qty;

        printf("\nThe Product Name Is : %s ",pname);
        printf("\nThe Product Rate Is : %d ",rate);
        printf("\nThe Product Quantity Is : %d ",qty);
        printf("\nThe Bill Amount Is : %d ",bill);
        fbill = fbill + bill;

        printf("\nPress 1. To Continue");
        printf("\nPress 2. To Exit");
        scanf("%d",&ch);
    }while(ch==1);

    printf("\nFinal Bill Amount Is %d ",fbill);
    printf("\n\t\t\t\tThank You\t\t\t\t\t");

    return 0;
}