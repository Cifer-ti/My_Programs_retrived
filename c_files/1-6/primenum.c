/*
 *verifies if a number
 *is a prime number
 */
#include <stdio.h>

int main(void)
{
    int num, divisor, d;  //d is the remainder 

    printf("Enter the number to be verified: ");
    scanf("%d", &num);

    //divide num by all it's preceeding numbers except 1
    //if the remainder at any point of division 
    //is zero then num is a not a prime number else it's a prime number

    for (divisor = 2; divisor < num; divisor++)
    {
        d = num%divisor;  
        if (d == 0)
        {
            break;
        }
    }
    if (divisor<num)
    {
        printf("%d is is divisible by %d: ", num, divisor);
    }
    else
    printf("%d, is a prime number", num);

    return 0;
}
    








