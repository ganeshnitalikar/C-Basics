//WAP TO READ SNAM, MARKS OF PHYSICS, CHEMISTRY  AND MATH. WRITE ALL INFO OF STUDENT INSIDE FILE RESULT.TXT. WRITE FILE TOTAL , PERCENTAGE INSIDE THE FILE.

#include <stdio.h>
int main()
{
    FILE *fp;
    char sname[20];
    int phy,che,math;
    float result;
    fp= fopen("result.txt","w");

    printf("\nEnter Student Name : ");
    scanf("%s",&sname);
    printf("\nEnter The Marks Of Physics: ");
    scanf("%d",&phy);
    printf("\nEnter The Marks Of Chemistry: ");
    scanf("%d",&che);
    printf("\nEnter The Marks Of Math: ");
    scanf("%d",&math);

    result = (phy+che+math)/3;

    fprintf(fp,"\nStudent Name : %s",sname);
    fprintf(fp,"\nPhysics Marks : %d",phy);
    fprintf(fp,"\nChemistry Marks : %d",che);
    fprintf(fp,"\nMath Marks : %d",math);
    fprintf(fp,"\nResult : %.2f",result);

    if (result>=75)
    {
        fprintf(fp,"\nStudent Passed With Distinction");
    }
    else if(result>=60)
    {
        fprintf(fp,"\nStudent Passed With A Grade");
    }
    else if(result>=35)
    {
        fprintf(fp,"\nStudent Passed ");
    }
    else
    {
        fprintf(fp,"\nStudent Failed");
    }

    printf("\n\t\t\tFile Created Successfully :)\t\t\t\n");

    return 0;

}