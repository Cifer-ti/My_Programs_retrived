//finds the gcd of two numbers
#include <stdio.h>

int main(void)
{
    int a,s,d,f,g;
      printf("Enter two numbers: ");
        scanf("%d %d", &a, &s);
  
       d = 1;     
     while (d <= a && d <= s)
     {
         if (a%d==0 && s%d == 0)
         {
            f = d;
         }
            d++;
     } 
    printf("the gcd is: %d\n", f);
    return 0;
}