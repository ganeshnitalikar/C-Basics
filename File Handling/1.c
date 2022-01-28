//

#include <stdio.h>
 
int main()
{
    FILE *fp;

    fp=fopen("myfile.txt","w");

    fprintf(fp,"Ganesh");
    fprintf(fp,"\nNitalikar");
    fprintf(fp,"\nSITS");
    fprintf(fp,"\nPune");

    printf("\nFile Created Successfully...");
    printf("\nPlease Check The File In ");

    return 0;
}