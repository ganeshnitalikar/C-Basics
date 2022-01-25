//DESIGN FUNCTION PERCENTAGE() AND WHICH WILL RETURN PERCENTAGE OF STUDENT BY PASSING ADDRESS OF P,C,M AS RGUMENT TO FUNCTION FROM USER.

#include <stdio.h>

int percentage(int *x, int *y, int *z)
{
   int per;
   int *p;
   
   per=(*x+*y+*z)/3;
   
   p=&per;
   
   return *p;
}

int main()
{
    int p,c,m;
	int *per;

    printf("\nEnter The Marks Of P,C,M : ");
    scanf("%d%d%d",&p,&c,&m);

    per =percentage(&p,&c,&m);

    printf("\nPercentage Is : %d",*per);
    
    if(*per>=75)
    {
    	printf("\nGrade A");
	}
    else if(*per>=50)
    {
    	printf("\nGrade B");
	}
    else 
    {
    	printf("\nGrade C");
	}
    return 0;
}
