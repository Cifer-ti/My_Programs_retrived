#include <stdio.h>

int main(void)
{
    int a,s,d,f,g;
    printf("Enter a wind speed (in knos): ");
    scanf("%d", &a);

    if (a < 1)
    {
        printf("Calm");
    }
    else if (a >= 1 && a <= 3)
    {
        printf("Light air");
    }
    else 
    {
        if (a >= 4 && a <= 27)
        printf("Breeze");
    }
        if (a >= 28 && a<= 47)
        {
            printf("Gale");
        }
        else if (a >= 48 && a<= 67)
        {
            printf("storm");
        }
        else
        printf("Hurricane");
        
    
    return 0;
    
}