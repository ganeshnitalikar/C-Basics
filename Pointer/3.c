//CALL BY REFERENCE
// if any function, call by passing address of variable as argument then such fuction are called as call by reference functions.

#include <stdio.h>

void change(int *p)
{
    (*p)++;
}

int main()
{
    int a = 100; 
    printf("\nThe value before change is : %d",a);
    change(&a);
    printf("\nThe Value after change is : %d",a);
    return 0;
}