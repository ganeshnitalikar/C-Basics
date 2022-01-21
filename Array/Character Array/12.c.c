// WAP TO PRINT AND FROM GIVEN CHAR ARRAY
//  char name[]={'A',}

#include <stdio.h>

int main()
{
    char name[12] = {'A', 'N', 'A', 'N', 'D', 'A', 'N', 'D', 'A', 'A', 'N', 'D'};
    int i;

    printf("\nString Is : %s \n", name);

    for (i = 2; i < 5; i++)
    {   
        printf("%c",name[i]);
    }

    return 0;
}