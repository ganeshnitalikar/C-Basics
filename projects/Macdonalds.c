#include <stdio.h>

int main()
{
    int choice, qty, bill, bch,a,fbill;
    int sum=0;
    do{
    printf("\n\t\t\t\tVenky's Express");


    printf("\n1.Tea -- 30rs");
    printf("\n2.Coffee -- 50rs");
    printf("\n3.Cold Cold -- 70rs");
    printf("\n4.Burger");
    printf("\n5.Pizza");
    printf("\n6.Nuggets -- 200rs");
    printf("\n7.French Fries -- 100rs");
    printf("\n8.Sandwich -- 100rs");
    printf("\n9.Coke -- 50rs");
    printf("\n10.Softy --  30rs");



    printf("\n\nPlease Select Menu Choice\n");
    scanf("%d", &choice);



    if (choice == 1)
    {
        printf("\nYou Have Selected Tea !");
        printf("\nPlease Enter The Quantity For Tea :\n");
        scanf("%d", &qty);
        bill = qty * 30;
        printf("\nThe Tea Bill Amount Is %d", bill);
    } // first choice end here

    else if (choice == 2)
    {
        printf("\nYou Have Selected Coffee!");
        printf("\nPlease Enter Ther Quantity For Coffee :\n");
        scanf("\n%d", &qty);
        bill = qty * 50;
        printf("\nThe Coffee Bill Amount Is %d", bill);
    } // second choice ends here

    else if (choice == 3)
    {
        printf("\nYou Have Selected Cold Coffee!");
        printf("\nPlease Enter Ther Quantity For Cold Coffee :\n");
        scanf("\n%d", &qty);
        bill = qty * 70;
        printf("\nThe Cold Coffee Bill Amount Is %d", bill);
    } // third coice ends here

    else if (choice == 4)
    {
        printf("\nYou Have Ordered For Burger");
        printf("\nPress 1 For VEG BURGER");
        printf("\nPress 2 For CHICKEN BURGER");
        scanf("%d", &bch);

        if (bch == 1)
        {
            printf("\nPlease Enter Quantity For VEG BURGER\n");
            scanf("%d", &qty);

            bill = qty * 100;
            printf("\nYour Bill Amount For VEG BURGER Is:%d", bill);
        } // veg burger ends here
        else if (bch == 2)
        {
            printf("\nPlease Enter Quantity For CHICKEN BURGER\n");
            scanf("%d", &qty);

            bill = qty * 200;
            printf("\nYour Bill Amount For CHICKEN BURGER Is:%d", bill);
        } // chicken burger ends here
        else
        {
            printf("\nInvalid Input");
        }

    } // fourth choice ends here
    else if (choice == 5)
    {
        printf("\nYou Have Ordered Pizza ");
        printf("\nEnter 1 For Small Size Pizza");
        printf("\nEnter 2 For Regular Size Pizza");
        printf("\nEnter 3 For Large Size Pizza\n");
        scanf("%d", &bch);

        if (bch == 1)
        {
            printf("\nEnter The Quantity For Small Size Pizza:");
            scanf("%d", &qty);

            bill = qty * 200;

            printf("\nYour Bill For Small Size Pizza Is : %d\n", bill);
        } // small size pizza
        if (bch == 2)
        {
            printf("\nEnter The Quantity For Regular Size Pizza:\n");
            scanf("%d", &qty);

            bill = qty * 300;
            printf("\nYour Bill For Regular Size Pizza Is : %d", bill);

        } // regular size pizza
        if (bch == 3)
        {
            printf("\nEnter The Quantity For Large Size Pizza:\n");
            scanf("%d", &qty);

            bill = qty * 500;

            printf("Your Bill For Large Size Pizza Is : %d", bill);

        } // large size pizza

    } // pizza ends here
    else if (choice == 6)
    {
        printf("\nYou Have Ordered Nuggets!");
        printf("\nEnter The Quantity For Nuggets:\n");
        scanf("%d", &qty);
        bill = qty * 200;
        printf("Your Bill Amount For Nuggets Is : %d", bill);
    } // nuggets ends here

    else if (choice == 7)
    {
        printf("\nYou Have Ordered French Fries!");
        printf("\nEnter The Quantity For French Fries:\n");
        scanf("%d", &qty);
        bill = qty * 100;
        printf("Your Bill Amount For French Fries Is : %d", bill);
    } // french fries ends here

    else if (choice == 8)
    {
        printf("\nYou Have Ordered Sandwich!");
        printf("\nEnter The Quantity For Sandwich:\n");
        scanf("%d", &qty);
        bill = qty * 100;
        printf("Your Bill Amount For Sandwich Is : %d", bill);
    } // sandwich ends here

    else if (choice == 9)
    {
        printf("\nYou Have Ordered Coke!");
        printf("\nEnter The Quantity For Coke:\n");
        scanf("%d", &qty);
        bill = qty * 50;
        printf("Your Bill Amount For Coke Is : %d", bill);
    } // coke ends here

    else if (choice == 10)
    {
        printf("\nYou Have Ordered Softy!");
        printf("\nEnter The Quantity For Softy:\n");
        scanf("%d", &qty);
        bill = qty * 30;
        printf("Your Bill Amount For Softy Is : %d", bill);
    } // softy ends here

    else
    {
        printf("Invalid Input");
    }



    sum = sum + bill;
    printf("\nPress 1. to continue");
    printf("\nPress 2. to exit");
    scanf("%d",&a);

    
    }while(a==1);


    printf("Your Total Bill Is : %d",sum);

    return 0;
}