//WAP TO PRINT ALL ARRAY ELEMENT BY USING POINTER AND PRINT ALTERNATE NUMBERS.


#include <stdio.h>
int main()
{
    int a[] = {10,20,30,40,50};
    int i,*ptr;
    ptr= a;

    printf("\nGiven Array Is : %d\n");

    for(i=0;  i<5;  i++)
    {
        printf("%d ",*ptr);
        *ptr++;
    }

    printf("\nAlternate Numbers In Array : %d");

    for(i=0;  i<5;  i++)
    {
        printf("%d ",*ptr);
        *ptr = *ptr + 2;
    }
    return 0;
}