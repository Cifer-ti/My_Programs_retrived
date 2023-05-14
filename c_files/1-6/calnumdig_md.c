//shows the number of digits of an integer

#include <stdio.h>
#define nim 1234
int main()
{
   int a,s,d,f,g,h,j,k,y;
  printf("Enter a max of 4 digit number: ");
  scanf("%d", &a);

  if (a>=0 && a <= 9)
 
  printf("the num %d has 1 number ", a);
  else if (a>=10 && a <= 99)
  printf ("The num %d has 2 numbers", a);
  else if (a>=100 && a <= 999)
  printf(" the num %d has 3 numbers", a);
  else if (a>=1000 && a<= 9999) 
  printf("the num %d has 4 nums", a);
  else 
  printf("The number you entered exceeds the required digits");
  
  
  return 0;
}
