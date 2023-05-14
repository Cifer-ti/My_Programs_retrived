//Balancing check book

#include <stdio.h>

int main(void)
{
    int cmd;  // cmd == command
    float balance = 0.0, credit, debit;
    printf("\n\n***** ACME check-book balancing program *****\n");
    printf("Commands: 0 = clear, 1 = credit, 2 = debit, 3 = balance, 4 = exit\n\n");
     //Uses storedin commands
     //to perform operations on check book 
     //depending on fllowing commands. 0: clears account by innitialising the variable ao balance to zero
     //1: increases the value of balance, 2: reduces the value of balance, both by value entered by user
     //3: shows account balance and 4: terminates loop by returning to system
    for ( ; ; )
    {
       printf("Enter command: "); //this appears inside loop cause it should be displayed every time
       scanf("%d", &cmd);         // to demand a command
       switch (cmd)
       {
       case 0:
        balance = 0.0;
        break;
        case 1:
        printf("Enter credit: ");
        scanf("%f", &credit);
         balance += credit;
         break;
         case 2: printf("Enter debit: ");
         scanf("%f", &debit);
         balance -= debit;
         break;
         case 3: printf("Current balance is: %.2f\n", balance);
         break;
         case 4:
         return 0;

         default:
         printf("Commands: 0 = clear, 1 = credit, 2 = debit, 3 = balance, 4 = exit\n\n");
        
        break;
       }
    }
    
    
}   //refer to ch 7

