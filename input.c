#include <stdio.h>

int main()
{
    int sum = 0, num, cu, i;

    printf("\nEnter A Number : ");
    scanf("%d", &num);

    for (i = 5; i>= 1; i--)
    {
        cu = i * i * i;
        printf("\n%d", cu);
        sum = sum + cu;
    }
        printf("\nSum Of Cube Of All Numbers Is : %d ", sum);
    return 0;
}