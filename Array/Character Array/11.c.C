//WAP TO PRINT GIVEN CHARACTER AND PRINT AANA FROM ARRAY.
// char name[8]={'P','R','A','S','S','A','N','A' }

#include <stdio.h>
int main()
{
    char name[8]={'P','R','A','S','S','A','N','A' };
    int i;
    printf("\nString Is : %s\n",name);

    for(i=0;  i<8;  i++)
    {
        if(name[i]=='A' || name[i]=='N')
        {
        printf("%c",name[i]);
        }
    }


    return 0;
}