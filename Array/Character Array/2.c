//WAP TO READ STRING AND FIND LENGTH OF STRING WITHOUT USING STRLEN().

#include <stdio.h>
int main()
{
    int i,count=0;
    char a[10];

    printf("Enter String : \n"); 
    gets(a);

    i= 0;
    while(a[i] != '\0')
    {

        printf("%c",a[i]);
        count++; 
        i++;

    }

    printf("\nString Length Is : %d",count);
    return 0;
}