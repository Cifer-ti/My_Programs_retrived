/*Calculated the number 
 *of digits in an integer
 */

#include <stdio.h>

int main(void)
{
    int a,s,d = 0,f,g;

    printf("Enter a non negative integer: ");
    scanf("%d", &a);

     do 
    {
       a /= 10;
       ++d;    
    } while (a>0);
     
     printf("The integer has %d digits: ", d);
     

    return 0;
    
}