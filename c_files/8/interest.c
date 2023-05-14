//prints a table of compound interest
#include <stdio.h>

#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))

int main(void){
    double value[5];
    float initial_balance;
    int i, rate, years, num_years;

    printf("----------This program prints a table of compound interest---------\n\n");

    printf("Enter the initial balance: ");
    scanf("%f", &initial_balance);

    printf("Enter innitial rate: ");
    scanf("%d", &rate);

    printf("Enter number of years: ");
    scanf("%d", &num_years);

    printf("\n\nYears");
    
    //prints a row showing the different rates
    for (i = 0; i < NUM_RATES; i++){
        printf("%6d%%", rate + i);
        value[i] = initial_balance; 
    }

    printf("\n");
    
    for (years = 1; years <= num_years; years++){
        printf("%3d   ", years);
     
    //prints the values of the compound interests
        for(i = 0; i < NUM_RATES; i++){
            value[i] += ((rate + i) / 100.00) * value[i];

            printf("%7.2f", value[i]);
        }

        printf("\n");
     }
}