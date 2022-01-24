//Null pointer is bet way to assign NULL value to the pointer, when we don't know exact addtress to be assigned.


#include <conio.h>
#include <stdio.h>

int main()
{
    int a =100;
    int *ptr;

    ptr=&a;

    printf("\nThe value of ptr is %d",ptr);  //prints memory address
    printf("\nThe value of ptr is %d",*ptr);  //prints the assigned value i.e. 100


    ptr = NULL;   //Used to clear the previous address store in pointer

    printf("\n The Value Of ptr Is %d",ptr);  //0

    return 0;

}