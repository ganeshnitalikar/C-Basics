//WAP TO FIND A OTHER CHARACTER FROM STRING "MAHABHARAT" EXCLUDING A AND H.

#include <stdio.h>
int main()
{
    int i,count=0;
    char str[20] = "MAHABHARAT";

    printf("String Is : %s",str);

    i=0;
    printf("\nOther Characters Are : ");
    while(str[i] != '\0')
    {
        if(str[i]!='A' && str[i]!='H')
        {
            printf("%c",str[i]);
            count++;
        }
        i++;
    }
    printf("\nTotal Number Of Other Characters Is :%d ",count);
    return 0;

}
