#include <stdio.h>
int main()
{
  int a[]={10,20,30,40,50};
  int i,*ptr;
  int x=0;
 
  ptr = a;

  printf("\nGiven Array : \n");

  for(i=0;  i<=4;   i++)
  {
      printf("%d ",*ptr);
      *ptr++;
     
      x++;   // counter
  }

  printf("\nGiven Array In Reverse Order\n");

  for(i=x;  i>=0;  i--)
  {
    if(*ptr!=0)
    {
         printf("%d ",*ptr);
       }
      *ptr--;
  }

  return 0;
}
