
/*Bank loan payement*/
#include <stdio.h>

int main(void)
{
    float loan, Yrate, Mpay, Mrate, a,s,d,f,g;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &Yrate);
    printf("Enter monthly payment: ");
    scanf("%f", &Mpay); 
     Mrate=Yrate/(12*100);
     a= ((loan*Mrate)+ loan)-Mpay;
     s= ((a*Mrate)+a)-Mpay;
     d= ((s*Mrate)+s)-Mpay;


     printf("Balance remainig after first payement: %.2f\n", a);
     printf("Balance after second payement: %.2f\n", s);
     printf("Balance after third payement: %.2f\n", d);


       return 0;
}