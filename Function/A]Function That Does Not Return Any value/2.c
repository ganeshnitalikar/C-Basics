// DESIGN A FUNCTION VOLUME() WHICH WILL PRINT A VOLUME OF BOX BY PASSING L,B,H AS ARGUMENT TO THE FUNCTIONS FROM THE USER.

#include <stdio.h>

void volume(int l,int b,int h)
{
    int v;

    v= l*b*h;

    printf("\nVolume Of Box Is : %d/n",v);


}
int main()
{
    int l,b,h;

    printf("Enter The Value For L,B,H");
    scanf("%d %d %d ",&l,&b,&h);

    volume(l,b,h);

    return 0;
}