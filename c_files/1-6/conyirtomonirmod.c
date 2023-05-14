#include <stdio.h>

int main(void)
{
    int a,s,d;
    float Yrate, Mpay, Mrate, loan;
    printf("Enter the number of payments: ");
    scanf("%d", &a);
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &Yrate);
    printf("Enter monthly payment: ");
    scanf("%f", &Mpay); 
    for (d = 1; d <= a; d++)
    {
        Mrate=Yrate/(12*100);
     d= ((loan*Mrate)+ loan)-Mpay;
     printf("payment: %d\n", d);
     
    }
    
    
}