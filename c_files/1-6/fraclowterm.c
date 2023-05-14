#include <stdio.h>

int main(void)
{
    int a,s,d,f,g;
    printf("Enter fraction: ");
    scanf("%d/%d", &a, &s);
     for (d = 1; d <= a && d <= s; d++)
     {
       if (a%d == 0 && s%d ==  0)
       {
        f = d;
       }
       
     }
     a /= f; s/=f;

     printf("In lowest terms: %d/%d", a, s);
     return 0;
     
}