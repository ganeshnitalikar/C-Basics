// How to access elements of array using pointers.

#include <stdio.h>

int main()
{
    int num[] = {100, 200, 300, 400, 500};
    int *p, i;

    p = num;                //"&" is not required for array

    for (i = 0; i <= 4; i++)
    {
        printf("\n%d", *p);
        *p++;
    }

    return 0;
}