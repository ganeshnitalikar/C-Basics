//WAP TO READ AND WRITE DATA INSIDE BANK.TXT FILE
//10.5

#include <stdio.h>
int main()
{
    FILE *f;
    float num;

    f = fopen("Bank.txt","w");

    fprintf(f,"10.5");

    fclose(f);

    f= fopen("Bank.txt","r");

    fscanf(f,"%f",&num);

    fclose(f);

    printf("%.2f",num);

    return 0;

}