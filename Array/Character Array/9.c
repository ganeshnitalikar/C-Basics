//WAP TO FIND OUT TOTAL NUMBER OF DIGIT GIVEN STRING "MH 12 H54SHAL"

#include <stdio.h>
int main()
{
    char arr[20] ="MH 12 H54SHAL";
    int i,count=0;

    printf("Given String Is : %s \n",arr);

    i = 0;

    while(arr[i] != '\0')
    {
        // if(arr[i]>=48 && arr[i]<=57)
        if(arr[i]<='9' && arr[i]>='0')
        {
            printf("%c",arr[i]);
            count++;
        }
        i++;
    }
printf("\nTotal Number Of Digits In String Is : %d ",count);

    return 0;

    
}