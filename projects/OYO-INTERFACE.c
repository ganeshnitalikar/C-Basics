#include <stdio.h>

int main()
{
    int ch1, ac, ch2, ch3, ch4, ch5, acbill, nacbill;
    char name[20], id[10];
    printf("\t\t\t-----Welcome To OYO-----\t\t\t");

    printf("\nEnter Customor Name : \n");
    gets(name);

    printf("\nSelect The ID Proof\n");
    printf("\n1.Pan Card");
    printf("\n2.Adhar Card\n");
    scanf("%d", &ch1);

    if (ch1 == 1)
    {
        printf("\nEnter Pan Card Number : \n");
        scanf("%s", &id);
    }
    else if (ch1 == 2)
    {
        printf("\nEnter Adhar Card Number : \n");
        scanf("%d", &ac);
    }
    else
    {
        printf("\nEnter The Valid Input");
    }
    do
    {
        printf("\t\tSelect The Room Type : ");
        printf("\n1.AC ROOM");
        printf("\n2.NON-AC ROOM \n");
        scanf("%d", &ch2);

        if (ch2 == 1)
        {
            printf("\nRoom Price : 2000rs/-");
            printf("\nBreakfast :100rs/-");
            printf("\nLunch :300rs/-");
            printf("\nDinner:300rs/-");
            printf("\nTea:50rs/-\n");
            printf("\nDo You Want To Proceed");
            printf("\n1.To Continue");
            printf("\n2.To Exit\n");
            scanf("%d", &ch3);
            if (ch3 == 1)
            {
                acbill = 2000 + 100 + 300 + 300 + 50;
                printf("\nSelect Size Of Room");
                printf("\n1.Family Room ----1000RS");
                printf("\n2.Double Room ----500RS");
                printf("\n3.Single Room ----No Extra Charge\n");
                scanf("%d", &ch4);
                if (ch4 == 1)
                {
                    acbill = acbill + 1000;
                }
                else if (ch4 == 2)
                {
                    acbill = acbill + 500;
                }
            }
            printf("\nYour Total Bill Is : %d", acbill);
        }
        else if (ch2 == 2)
        {
            printf("\nRoom Price : 1500rs/-");
            printf("\nBreakfast :100rs/-");
            printf("\nLunch :200rs/-");
            printf("\nDinner:300rs/-");
            printf("\nTea:50rs/-\n\n");
            printf("\nDo You Want To Proceed ");
            printf("\n1.To Continue");
            printf("\n2.To Exit\n");
            scanf("%d", &ch3);
            if (ch3 == 1)
            {
                nacbill = 1500 + 100 + 200 + 300 + 50;
                printf("\nSelect Size Of Room");
                printf("\n1.Family Room ----1000RS");
                printf("\n2.Double Room ----500RS");
                printf("\n3.Single Room ----\n");
                scanf("%d", &ch4);
                if (ch4 == 1)
                {
                    nacbill = nacbill + 1000;
                }
                else if (ch4 == 2)
                {
                    nacbill = nacbill + 500;
                }
            }
            printf("\n\nYour Total Bill Is : %d\n\n", nacbill);
        }
        else
        {
            printf("\nEnter Valid Input ");
        }
        printf("\nWant To Book Another Room : \n");
        printf("\n1.Yes");
        printf("\n2.No");
        scanf("%d", &ch5);
    } while (ch5 == 1);

    printf("\nThank You ! Have A Nice Day :)");
    return 0;
}