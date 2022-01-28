//WAP TO CREATE THREE FILE 
// MANAGER.TXT---(HARSHAL , ANUSHKA, GANESH)
// ANALYST.TXT---(SHUBHAM, AKASH, VEDANT)
//DIRECTOR.TXT---(VEDANG, GAURAV, ABHI)

#include <stdio.h>
int main()
{
    FILE *f1,*f2,*f3;

    f1=fopen("manager.txt","w");
    f2=fopen("analyst.txt","w");
    f3=fopen("director.txt","w");

    fprintf(f1,"\nHarshal");
    fprintf(f1,"\nAnushka");
    fprintf(f1,"\nGanesh");

    fprintf(f2,"\nShubham");
    fprintf(f2,"\nAkash");
    fprintf(f2,"\nVedant");

    fprintf(f3,"\nVedang");
    fprintf(f3,"\nGaurav");
    fprintf(f3,"\nAbhi");

    printf("\n--------Files Created Successfully-----------");

    return 0;    

    
}