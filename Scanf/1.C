// WAP TO READ L,B,H VALUES AND CALCULATE THE VOLUME OF BOX.

#include <stdio.h>
int main()
{
    int l,b,h,v;

    printf("Enter The Value For L : ");
    scanf("%d",&l);

    printf("\nEnter The Value For B : ");
    scanf("%d",&b);

    printf("\nEnter The Valuse For H : ");
    scanf("%d",&h);

    v = l*b*h;

    printf("Volume Of Box Is : %d",v);

    return 0;
}