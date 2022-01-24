//WAP TO READ STRIN AND FIND TOTAL NUMBER WORD IN THAT STRING 

#include <stdio.h>
int main()
{
    char str[200];
    int count=1,i;

    printf("Enter The String : ");
    gets(str);

    printf("\nThe String Is : %s",str);

    i=0;

    while(str[i])
    {
        if(str[i]==' ')
        {
            count++;
        }
        i++;
    }

    printf("\nThe String Is :%d",count);

    return 0;

}