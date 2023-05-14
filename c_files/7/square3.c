 //prints a table of squares from 1 to num
 #include <stdio.h>

 int main(void){
    long int num, i;

    printf("This prints a table of squares\n");
    printf("Enter the number of enteries of table: \n");
    scanf("%lu", &num);
     
     getchar(); //gets '\n' from buffer
    printf("number\tsquare");

    for ( i = 1; i <= num; i++){
        printf("%10lu %10lu\n", i, i*i);

        if (i % 24 == 0){
            printf("press Enter to continue....");
            getchar();
        }
    }
    return 0;
 }
 //fixed bug of square.c