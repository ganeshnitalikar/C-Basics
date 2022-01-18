//WAP TO READ STRING AND FIND LENGTH OF STRING AND ALSO FIND TOTAL NUMBER OF VOWELS IN THAT STRING.
#include <stdio.h>

int main()
{
    char arr[20];
    int i,count=0,v=0;

    printf("Enter The String : ");
    gets(arr);

    i = 0;
    while(arr[i]!='\0')
    {
        printf("%c",arr[i]);
        count++;

        if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u' || arr[i]=='A' || arr[i]=='E' || arr[i]=='I' || arr[i]=='O' || arr[i]=='U')
        {
            v++;
        }
        i++;
    }
    printf("\nLength Of String Is : %d",count);
    printf("\nTotal Number Of Vowels(a,e,i,o,u) Is : %d",v);

    return 0;
}