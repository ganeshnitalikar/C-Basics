// WAP TO READ EMPLOYEE NAME AND WAGES AND WDAYS CALCULATE THE PAYMENT OF EMPLOYEE IF PAYMENT MORE THAN 35000 THEN 20% TAX WILL BE APPLICABLE.DISPLAY
// TOTAL PAYMENT
// TAX AMOUNT
// FINAL SALARY

int main()
{
    char ename[20];
    int wages, wdays, pay, payt;
    float tax;

    printf("Enter Your Name : ");
    gets(ename);

    printf("Enter Your Wage : ");
    scanf("%d", &wages);

    printf("Enter Your Working Days :");
    scanf("%d", &wdays);

    pay = wages * wdays;

    if (pay >= 35000)
    {
        tax = pay *0.20;
        payt = pay - tax;
        printf("Your Salary Is : %d",pay);
        printf("\nTax Amount Is :%f", tax);
        printf("\nYour Income Is : %d", payt);
    }
    else
    {
        printf("Your Salary Is : %d", pay);
    }
    return 0;
}