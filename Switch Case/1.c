// WAP TO READ COLOR CODE (R-RED, B-BLUE ,G-GREEN ) AND PRINT SPECIFIC COLOR NAME

#include <stdio.h>
int main()
{
    int ch;
    char clrcode;
    do
    {
        printf("Enter The color code ");
        scanf("%c", &clrcode);

        switch (clrcode)
        {
        case 'r':
        case 'R':
            printf("RED");
            break;
        case 'b':
        case 'B':
            printf("BLUE");
            break;
        case 'G':
        case 'g':
            printf("GREEN");
            break;

        default:
            printf("Invalid Color Code ");
            break;
        }
        printf("\nPress 1. To Continue");
        printf("\nPress 2. To Exit");
        scanf("\n%d", &ch);
    } while (ch == 1);
    return 0;
}