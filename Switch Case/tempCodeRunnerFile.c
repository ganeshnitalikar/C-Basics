// WAP TO READ LUMSUM AMOUNT, NUMBER OF YEARS, CUSTOMOR NAME AND PRINT FOLLOWING RESULT
// 1-10%
// 2-20%
// 5-30%

#include <stdio.h>
int main()
{
    int lumsum, noy, ch;
    float intrest, tamount;
    char name[20];
    do
    {

        printf("Enter The Lumsum Amount : \n");
        scanf("%d", &lumsum);

        printf("Enter The Number Of Years : \n");
        scanf("%d", &noy);

        printf("Enter The Customor Name : \n");
        scanf("%s", &name);

        switch (noy)
        {
        case '1':
            intrest = lumsum * 0.10;
            tamount = lumsum + intrest;
            printf("\nYour Total Amount After 1 Year Is : %f", tamount);
            break;

        case '2':
            intrest = lumsum * 0.20;
            tamount = lumsum + intrest;
            printf("\nYour Total Amount After 2 Years Is : %f", tamount);

        case '5':
            intrest = lumsum * 0.30;
            tamount - lumsum + intrest;
            printf("\nYour Total Amount After 5 Years Is :%f ,tamount");

        default:
            printf("\nChoose Valid Number Of Years ");
            break;
        }
        printf("Press 1. To Continue ");
        printf("Press 2. To Exit ");
        scanf("%d", &ch);
    } while (ch == 1);

    return 0;
}