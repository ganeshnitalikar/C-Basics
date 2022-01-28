// WAP TO READ ENAME, WAGES, WDAYS, AND CALCULATE PAYMENT OF EMPLOYEE FOR MULTIPLE EMPLOYEE AND IF PAYMENT MORE THAN 20000 THE 20% TAX WILL BE APPLICABLE.
// DISPLAY ALL INFORMATION AND PAYMENT INSIDE THE FILE.
// DISPLAY TOTAL EMPLOYEE TAXABLE INSIDE THE FILE.
// DISPLAY TOTAL NUMBER OF EMPLOYEE NONTAXABLE INSIDE THE FILE.
// GENERATE EMPLOYEE SALARY BY HIS NAME.

#include <stdio.h>
int main()
{
    int wages, wdays, payment, te = 0, nte = 0,ch;
    float tax, salary;
    char ename[20];
    FILE *f;

    f = fopen("Salary.txt", "a");
    do
    {
        printf("\nEnter The Employee Name : ");
        scanf("%s", &ename);

        printf("\nEnter The Wage : ");
        scanf("%d", &wages);

        printf("\nEnter Working Days : ");
        scanf("%d", &wdays);

        payment = wages * wdays;

        // if (payment >= 20000)
        // {
        //     tax = payment * 0.20;
        //     salary = payment - tax;
        //     te++;
        // }
        // else
        // {
        //     salary = payment;
        //     nte++;
        // }

        fprintf(f, "\nEmployee Name : %s", ename);
        fprintf(f, "\nWorking Days : %d", wdays);
        fprintf(f, "\nWage : %d", wages);
        fprintf(f, "\nPayment Of Employee : %d", payment);
        if (payment >= 20000)
        {
            tax = payment * 0.20;
            salary = payment - tax;
            fprintf(f, "\nTax : %f", tax);
            fprintf(f, "\nSalary : %f", salary);
            te++;
        }
        else{
            fprintf(f,"\nSalary : %d",payment);
            nte++;
        }
        fprintf(f,"\n\n--------------------------------------\n");
        fprintf(f, "\nTotal Tax Payers : %d", te);
        fprintf(f, "\nTotal Employees Without Tax : %d\n", nte);
        fprintf(f,"\n--------------------------------------\n");
        printf("\nDo You Want To Add ");
        printf("\nYes");
        printf("\nNO\n");
        scanf("%d", &ch);
    } while (ch == 1);
    return 0;
}