// WAP TO PRINT ALL ARRAY ELEMENT BY USING POINTER AND ALSO PRINT ALL ELEMENT IN REVERSE ORDER USING POINTER.


#include <stdio.h>
int main()
{
    int a[] = {10,20,30,40,50,60};
    int i,*ptr;

    ptr = a;

    printf("\nGiven Array : \n");

    for(i=0;  i<7;   i++)
    {
        printf("%d ",*ptr);
        *ptr++;
		
    }
*ptr--;
    printf("\nGiven Array In Reverse Order\n");
	
    for(i=0;  i<7;  i++)
    {
        printf("%d ",*ptr);
        *ptr--;
    }

    return 0;
}
