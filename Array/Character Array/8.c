//WAP TO FIND OUT TOTAL NUMBER OF UPPERCASE AND LOWERCASE CHARACTER GIVEN STRING "Har54SHal".

#include <stdio.h>
int main()
{
    char str[10] = "Har54SHal";
    int i;
    int ucount=0,lcount=0,num=0;

    printf("Given String Is : %s",str);

    i = 0;

    while(str[i] != '\0')
    {
        if(str[i]>=65 && str[i]<=90)
        {
            ucount++;
        }
        else if(str[i]>=97 && str[i]<=122)
        {
            lcount++;
        }
        else
        {
            num++;
        }

        i++;
    }
    printf("\nThe Number Of Uppercase Charaters Is : %d",ucount);
    printf("\nThe Number Of Lowercase Charaters Is : %d",lcount);
    printf("\nThe Number Of Numbers And Symbols Is : %d",num);

    return 0;
}