// WAP TO FIND OUT ARRAY WITH LARGEST SUM  FROM  GIVEN ARRAY.
//  a[]={10,20,30,400}  b[]={60,50,40,30,20,10}

#include <stdio.h>
int main()
{
    int a[] = {10, 20, 30, 400};
    int b[] = {60, 50, 40, 30, 20, 10};

    int i, j, *ptr1, *ptr2;
    int s1 = 0, s2 = 0;
    ptr1 = a;
    ptr2 = b;

    printf("\nFirst Array Is : \n");

    for (i = 0; i < 4; i++)
    {
        printf("%d ", *ptr1);
        s1 = s1 + *ptr1;
        *ptr1++;
    }

    printf("\nSecond Array Is : \n");

    for (i = 0; i < 6; i++)
    {
        printf("%d ", *ptr2);
        s2 = s2 + *ptr2;
        *ptr2++;
    }

    if (s1 > s2)
    {
        printf("\nFirst Array Has Largest Sum Which Is : %d", s1);
    }
    else
    {
        printf("\nSecond Array Has Largest Sum Which Is : %d", s2);
    }

    return 0;
}