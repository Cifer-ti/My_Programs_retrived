//Prints and identity matrix
#include <stdio.h>

int main(void){
    int i, j, di;

    printf("Program prints an indentity marix\n\n");
    printf("Enter the dimension of matrix: ");
    scanf("%d", &di);
      
     double I[di][di];

     for (i = 0; i < di; i++){
        for (j = 0; j < di; j++){
            if (i == j)
               I[i][j] = 1.0;
            
            else I[i][j] = 0.0;

            printf("%2.f", I[i][j]);
        }
        printf("\n");
     }
     return 0;
}