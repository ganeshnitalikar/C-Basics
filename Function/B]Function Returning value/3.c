// DESIGN A FUNCTION VOLUME() WHICH WILL RETURN THE VOLUME OF  BOX AND PRINT THE VOLUME OF EACH BOX IN MAIN FUNCTION AND ALSO PRINT TOTAL VOLUME OF BOX.

#include <stdio.h>

int volume(int x,int y , int z)
{
    int vol;

    vol = x*y*z;

    return vol;
}

int main()
{
    int vb1,vb2,vb3 ;
    int l,b,h;
    

    
    printf("\nEnter The Values Of : L,B,H\n");
    scanf("%d %d %d",&l,&b,&h);

    vb1 = volume(l,b,h);
    vb2 = volume(l,b,h);
    vb3 = volume(l,b,h);
    printf("\nThe Volume Of \nBox 1 : %d \nBox 2 : %d \nBox 3 : %d");

    return 0;
}