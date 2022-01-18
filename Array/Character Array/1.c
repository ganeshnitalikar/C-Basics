//WAP TO STRING AND PRINT THAT STRING.

#include <stdio.h>

int main()
{
    int i;
    char str[10];

    printf("Enter String : \n");
    // scanf("%s",&str);
    gets(str);

    printf("Entered String Is : %s",str);

    return 0;
}