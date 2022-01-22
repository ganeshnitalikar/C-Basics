// WAP TO PRINT AND FROM GIVEN CHAR ARRAY
//  char name[]={'A',}

#include <stdio.h>

int main()
{
    char name[12] = {'A', 'N', 'A', 'N', 'D', 'A', 'N', 'D', 'A', 'A', 'N', 'D'};
    int i,j,length;

    printf("\nString Is : %s \n", name);

    length = sizeof(name)/sizeof(name[0]);
    
    for(i=0;  i<length;  i++)
    {
        for(j=i+1;  j<length;  j++)
        {
            if(name[i]==name[j])
            {
                // printf("%c",name[j]);
                return true;
            }
        }
    }

    return 0;
}