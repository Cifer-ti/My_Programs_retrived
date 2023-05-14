//This program computes the factorial 
//of a number entered
#include <stdio.h>

int main(void)
{
    int factorial,s,num;
    printf("Enter the number whose factorial is to be computed: ");
    scanf("%d", &num);
    for (factorial = 1, s = 1; s <= num ; s++)
    {
        factorial *= s;
        
        if (s == num)
        {
          printf("The factorial of %d is: %d\n", num, factorial);
        }
       
    }
    
    return 0;
    
}