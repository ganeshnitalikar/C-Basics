// WAP TO READ SINGLE DIGIT NUMBER AND PRINT THAT NUMBER IN WORDS

#include <stdio.h>
int main()
{
    int num,ch;
    do {
    printf("Enter Number Between 0 to 9\n");
    scanf("%d",&num);

    switch (num)
    {
    case 0:
        printf("\nYou Entered : ZERO");
        break;
    case 1: 
        printf("\nYou Entered : ONE");
        break;
    case 2: 
        printf("\nYou Entered : TWO");
        break;
    case 3: 
        printf("\nYou Entered : THREE");
        break;
    case 4: 
        printf("\nYou Entered : FOUR");
        break;
    case 5: 
        printf("\nYou Entered : FIVE");
        break;
    case 6: 
        printf("\nYou Entered : SIX");
        break;
    case 7: 
        printf("\nYou Entered : SEVEN");
        break;
    case 8: 
        printf("\nYou Entered : EIGHT");
        break;
    case 9: 
        printf("\nYou Entered : NINE");
        break;
    default:
        printf("\nPlease ENTER VALID NUMBER");
        break;
    }
    printf("\nPress 1. To Continue");
    printf("\nPress 2. TO Exit \n");
    scanf("%d",&ch);

    } while(ch==1);
    
    printf("\n***Thank You For Using This Program***");
    return 0;
}