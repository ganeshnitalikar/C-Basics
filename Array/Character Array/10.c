// WAP TO FIND TOTAL NUMBER OF CHARACTERS EXLUDING A.

#include <stdio.h>
int main()
{
    char name[10] = {'P','R','A','S','S','A','N','A'};
    int i,count=0;

    printf("\nString Is : \n");

    for(i=0;   i<10;  i++)
    {
        printf("\n%c",name[i]);

        if(name[i]!='A')
        {
            count++;
        }
        
    }
    printf("\nOther Characters In String : %d",count);
    return 0;
}