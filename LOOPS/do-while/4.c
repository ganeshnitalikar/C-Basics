// WAP TO READ EMPLOYEE NAME, WAGES, WDAYS, AND CALCULATE THE PAYMENT OF EACH EMPLOYEE AND DISPLAY TOTAL AMOUNT PAID
#include <stdio.h>
int main()
{
    int w,wdays,pay,ch,sum=0;
    char ename[10];
    
    do{
        printf("Enter Employee Name :");
        scanf("%s",&ename);

        printf("Enter Wage :");
        scanf("%d",&w);

        printf("Enter W-days :");
        scanf("%d",&wdays);

        pay = w*wdays;

        printf("Payment Of %s Is %d ",ename,pay);

        sum = sum + pay;

        printf("\nPress 1. To Continue");
        printf("\nPress 2. To Exit");
        scanf("%d",&ch);

    }while(ch==1);

    printf("\nTotal Payment Is : %d",sum);
    return 0;
}