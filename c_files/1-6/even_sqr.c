//prints the square of even numbers between 
//from 2 till a n (n is a number entered)
#include <stdio.h>

int main(void)
{
    int a,s,n;
 printf("Enter a number: ");
 scanf("%d", &n);

   for (s=2; (s*s)<=n; s++)
{ 
    if (s%2 == 0)
    {
    printf("%d\n", s*s);
    }
}
return 0;
} 
