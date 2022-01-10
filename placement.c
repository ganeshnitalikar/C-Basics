// PLACEMENT 

#include <stdio.h>

int main()
{
    char lang;
    int nc = 100,ch;
    int J=10, JS = 10, Cpp=10, C=10;

    do{

    

    printf("\nEnter Your Skills ");
    printf("\n J=Java");
    printf("\n JS=JavaScript");
    printf("\n Cpp=Cpp");
    printf("\n C=C\n");
    scanf("%s",&lang);


    printf("\nSeats Available For Java -- 10");
    printf("\nSeats Available For JavScript -- 10");
    printf("\nSeats Available For Cpp -- 10");
    printf("\nSeats Available For C -- 10\n");

    switch(lang)
    {
        case 'J' : printf("\nYou Have Selected Java");
                    J--;
                    printf("\nSeats Available For Java -- %d",J);
                    break;
        case 'JS' : printf("\nYou Have Selected JavaScript");
                    break;
        case 'Cpp' : printf("\nYou Have Selected Cpp");
                    break;
        case 'C' : printf("\nYou Have Selected C");
                    break;

        default : printf("\nEnter The Valid Input");
                    break;
    }

    printf("\nPress 1. To Continue");
    printf("\nPress 2. To Exit\n");
    scanf("%d",&ch);

    }while(ch==1);
}