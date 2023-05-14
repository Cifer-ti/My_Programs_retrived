/*
 *Shows how to pay an amount 
 *using the smallest number of
 *20cfa, 10cfa, 5cfa, 1cfa 
 */
#include <stdio.h>

int main(void)
{
    int a, s,d,f,g,h,j,k;
    
    printf("Enter a Franc Cfa amount: ");
    scanf("%d", &a);
    
    s = a/20;
    d = a-(s*20);
    f= d/10;
    g= d-(f*10);
    h= g/5;
    j= g-(h*5);
    k= j/1;
     
     printf("20cfa bill: %d\n", s);
     printf("10cfa bill: %d\n", f);
     printf(" 5cfa bill: %d\n", h);
     printf(" 1cfa bill: %d\n", k);
     
     return 0;
}