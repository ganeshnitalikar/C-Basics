// 

#include <stdio.h>

int volume()
{
    int x,y,z;
    int vol;

    printf("\nEnter The Values For L,B,H");
    scanf("%d %d %d",&x,&y,&z);

    vol = x*y*z;

    return vol;
}


int main()
{
    int v1,v2,v3,tv;
    v1=volume();
    v2=volume();
    v3= volume();
    tv = v1+v2+v3;

    printf("\nTotal Volume Is : %d",tv);
    return 0;
}