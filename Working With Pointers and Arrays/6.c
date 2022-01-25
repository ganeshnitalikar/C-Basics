// WAP TO FIND OUT LARGEST SIZE OF AN ARRAY FROM TWO GIVEN ARRAY ELEMENT.
// int a[] = {10, 20, 30, 400};  int b[] = {60, 50, 40, 30, 20, 10};

#include <stdio.h>
int main()
{
    int a[] = {10, 20, 30, 400};
    int b[] = {60, 50, 40, 30, 20, 10};

    int i, c1 = 0, c2 = 0, *ptr1, *ptr2;

    ptr1 = a;
    ptr2 = b;

    printf("\nFirst Array Is : \n");
    for (i = 0; i < 4; i++)
    {
        printf("%d ", *ptr1);
        *ptr1++;
        if (*ptr1 != '\0')
        {
            c1++;
        }
    }

    printf("\nSecond Array Is : \n");
    for (i = 0; i < 6; i++)
    {
        printf("%d ", *ptr2);
        *ptr2++;

        if (*ptr2 != '\0')
        {
            c2++;
        }
    }
   	printf("\n%d",c1);
	printf("\n%d",c2);
    if (c1 > c2)
    {
        printf("\nFirst Array Is Larger");
    }
    else
    {
        printf("\nSecond Array Is Larger");
    }
    return 0;
}
