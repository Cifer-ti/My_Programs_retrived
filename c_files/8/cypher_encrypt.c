//encrypts a message using the ceasar cypher encryption technique
#include <stdio.h>

#define MAX_LEN 100

int main(void) {
    char messg[MAX_LEN], ch;
    int i, n, length = 0;

    printf("Enter the message to encrypt: ");
    for (i = 0; (ch = getchar()) != '\n' && length < MAX_LEN; i++) {
        messg[i] = ch;
        length++;
    }

    printf("Enter shift amount (1-23): ");
    scanf("%d", &n);

    printf("Encrypted message: ");
    for (i = 0; i < length; i++){
        if (messg[i] >= 'a'&& messg[i] <= 'z')
            messg[i] = ((messg[i] - 'a') + n) % 26 + 'a';
        else if (messg[i] >= 'A' && messg[i] <= 'Z')
            messg[i] = ((messg[i] - 'A') + n) % 26 + 'A';
        
    }
        printf("%s", messg);
        printf("\n\n");
        
        printf("***To dencrypt message shift amount should be 26 minus encryption shift amnount***\n\n");

        return 0;
}   
