#include <stdio.h>
int main()
{
    int a=20,b=21,c=19;
    int x,y,z;

    x= a--;
    y= ++a;

    z = (x>=b?(c<a?50:x):b);

    printf("%d",z);

    return 0;
}