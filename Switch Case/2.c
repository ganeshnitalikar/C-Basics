// WAP TO READ TRANSACTION CODE D=DEPOSIT W=WITHDRAW S=SHOWBALANCE.. AND ALSO READ ACCOUNT NUMBER NAME AND AMOUNT 

#include <stdio.h>
int main()
{
    int accnum,bal,damount,wamount,ch;
    char name[10],tcode;

    printf("\nEnter Your Account Number : ");
    scanf("%d",&accnum);

    printf("\nEnter Account Holder Name : ");
    scanf("%s",&name);

    printf("\nEnter The Account Balance : ");
    scanf("%d",&bal);

    do{

    printf("\nSelect The Transaction : D - Deposit ; W - Withdra`w ; S - View Balance ");
    scanf("%s",&tcode);

    switch(tcode)
    {
    case 'D':
        printf("\nEnter The Amount To Be Deposited :");
        scanf("%d",&damount);
        break;
    case 'W':
        printf("\nEnter The Amount To Be Withdrawn :");
        scanf("%d",&wamount);
        if(bal>wamount)
        {
            bal = bal - wamount;
            printf("\nYour Updated Balance Is : %d ",bal);
        }
        else
        {
            printf("\nInsufficient Balance ");
            printf("\nTum Gareeb HO ");
            printf("\nYour Account Balance Is %d , Please Enter Valid Input : ",bal);
        }

        break;

    case 'S':
        printf("\nYour Account Balance Is : %d ",bal);
        break;

    default:
        printf("\nEnter Valid Input ");
        break;
    }

    printf("\nPress 1. To Continue ");
    printf("\nPress 2. To Exit ");
    scanf("%d",&ch);
    }while(ch==1);

    printf("\n**Thank You For Using My Program**");

    return 0;
}
