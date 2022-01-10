#include <stdio.h>
int main()
{
    int ch,choice,bal,wamount;

    printf("\t\t\t***Welcome****");
    printf("\nPlease Select From The Following ");

    printf("\n1.Show Balance ");
    printf("\n2.Withdraw");
    printf("\n3.Deposit");
    printf("\n4.Change Your Pin ");
    printf("\n5.Bank To Bank Transfer");
    printf("\n6.Adhar Link");
    printf("\n7.Account Information");
    printf("\n8.Exit\n");
    
    
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("Your Account Balance Is : %d",bal);
        break;
    case 2:
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
    default:
        break;
    }


}