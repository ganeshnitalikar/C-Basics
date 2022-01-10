// ternary Operator ;
// Ternary Operator Is Same As If-Else ;
// Ternary Operator Indicated By (?:);

// example

#include <stdio.h>
int main()
{
    int x=50,y=70;
    int z;

    z =(x!=y ? x :y);

    printf("%d",z); //50
    
    return 0;
}