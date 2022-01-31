// WAP TO GENERATE MARKSHEET OF STUDENT ACCORDING HIS NAME TAKE INPUT FROM USER : ROLL NUMBER, PHYSICS ,MATH , CHEMISTRY AND PRINT TOTAL MARK AND PERCENTAGE AND ALSO CHECK STUDENT PASS OR FAIL. AND CHECK FOR FIRST CLASS OR NOT. ALSO CHECK FAIL IN WHICH SUBJECT

#include <stdio.h>
#include <string.h>
int main()
{

    FILE *f;
    char sname[300];
    int rno, phy, math, che, tm, ch;
    float per;
    do
    {
        printf("\nEnter The Student Name : ");
        scanf("%s", &sname);

        f = fopen(strcat(sname,"_marksheet.txt"), "w");

        printf("\nEnter The Roll Number : ");
        scanf("%d", &rno);

        printf("\nEnter The Marks Of Physics : ");
        scanf("%d", &phy);

        printf("\nEnter The Marks Of Chemistry : ");
        scanf("%d", &che);

        printf("\nEnter The Marks Of Math : ");
        scanf("%d", &math);

        tm = phy + che + math;
        per = tm / 3;
        fprintf(f, "--------------------------Marksheet---------------------\n\n");
        fprintf(f, "\nStudent Name : %s", sname);
        fprintf(f, "\nRoll Number : %d", rno);
        fprintf(f, "\n\n----Scorecard-----");
        fprintf(f, "\nPhysics : %d", phy);
        fprintf(f, "\nChemistry : %d", che);
        fprintf(f, "\nMath : %d", math);
        fprintf(f, "\nTotal Marks Obtained : %d", tm);
        fprintf(f, "\nPercentage : %.2f", per);
        if (per >= 75 && phy >= 35 && math >= 35 && che >= 35)
        {
            fprintf(f, "\nPassed With Distinction\n\n ");
        }
        else if (per >= 50 && phy >= 35 && math >= 35 && che >= 35)
        {
            fprintf(f, "\nPassed With A Grade\n\n");
        }
        else if (per > 35 && phy >= 35 && math >= 35 && che >= 35)
        {
            fprintf(f, "\nPassed\n\n");
        }
        else
        {
            fprintf(f, "\nFailed\n\n");
        }

        printf("\nResult Created And Stored Successfully\n");
        printf("\nPress 1. To Create Another Marksheet");
        printf("\nPress 2. To Exit\n");
        scanf("%d", &ch);
    } while (ch == 1);

    return 0;
}