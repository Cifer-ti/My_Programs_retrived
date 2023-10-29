//Balancing check book
#include <stdio.h>

int main(void)
{
    int cmd;  
    float balance = 0.0, credit, debit;

    printf("\n***** ACME check-book balancing program *****\n\n");
    printf("Commands: 0 = clear, 1 = credit, 2 = debit, 3 = balance, 4 = exit\n\n");
     
    
    for ( ; ; ) {

       printf("Enter command: "); 
       scanf("%d", &cmd);  

       switch (cmd) {
            case 0:
                balance = 0.0;
                break;

            case 1:
                printf("Enter credit: ");
                scanf("%f", &credit);
                balance += credit;
                break;

            case 2: 
                printf("Enter debit: ");
                scanf("%f", &debit);
                balance -= debit;
                break;

            case 3: 
                printf("Current balance is: %.2f\n", balance);
                break;\

            case 4:
                return 0;

            default:
                printf("Commands: 0 = clear, 1 = credit, 2 = debit, 3 = balance, 4 = exit\n\n");
                break;
       }    
    }
    
    
} 

