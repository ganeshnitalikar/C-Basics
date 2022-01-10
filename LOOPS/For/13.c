// WAP TO PRINT ALL NUMBERS AND ALSO PRINT SUM OF CUBE OF ALL NUMBERS FROM 5 TO 1 
#include <stdio.h>
int main()
{
    int cube,i,sum=0;

    for(i=5; i>=1; i--)
    {
        cube = i*i*i;
        printf("\nCube Of %d Is : %d",i,cube);
        sum = sum + cube;
    }
    printf("\nSum Of Cubes Is : %d",sum);
    return 0;
}