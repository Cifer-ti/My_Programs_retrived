//maintains a part databese (array version)
#include <stdio.h>
#include "readline.h"

#define NAME_LEN 25 
#define MAX_PARTS 100

struct part {
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
}inventory[MAX_PARTS];

int num_parts = 0; //number of parts currently stored

int find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);

/**
 * main: Prompts the user to enter operation code,
 *       then calls a function to perform the requested
 *        action. stops when the user enters the command 'q'.
 *        prints an error if the user enter an illegal code.
*/
int main(void) {

    char code;

    for (; ;) {
        printf("Enter operation code: ");
        scanf(" %c", &code);

        while (getchar() != '\n')
            ;
        switch (code) {
            case 'i': insert();
                      break;
            case 's': search();
                      break;
            case 'u': update();
                      break;
            case 'p': print();
                      break;
            case 'q': return 0;
            default:
                printf("Illegal code\n");
        }
        printf("\n");
    }
}

/**
 * find_part: Looks up a number in the inventory
 *            array. Returns the array index if the part
 *            exist else, returns -1 
*/
int find_part(int number) {
    int i;

    for (i = 0; i < num_parts; i++) {
        if (inventory[i].number == number)
            return i;
    }
    return -1;
}

/**
 * insert: prompts the user for information about a new
 *         part and then insets the part into the database.
 *         prints an error and returns prematurely if the part already
 *         exist or the database is full.
*/
void insert(void) {

    int part_number;

    if (num_parts == MAX_PARTS) {
        printf("Database is full; can't add more parts. \n");
        return;
    }

    printf("Enter part number: ");
    scanf("%d", &part_number);

    if (find_part(part_number) >= 0) {
        printf("Part already exist.\n");
        return;
    }

    inventory[num_parts].number = part_number;
    printf("Enter part name: ");
    read_line(inventory[num_parts].name, NAME_LEN);
    printf("Enter quantity on hand: ");
    scanf("%d", &inventory[num_parts].on_hand);
    num_parts++;
}

/**
 * search: prompts the user to enter a part number, then looks
 *         up the part in the database. if the part exits, prints the name
 *         and the quantity on hand if not, prints and error message.
*/
void search(void) {

    int number, i;

    printf("Enter part number: ");
    scanf("%d", &number);

    i = find_part(number);
    if (i >= 0) {
        printf("Part name: %s\n", inventory[i].name);
        printf("Quantity on hand: %d\n", inventory[i].on_hand);
    }
    else
        printf("Sorry Part %d not found.\n", number);
}

/**
 * update: prompts the user to enter a part number.
 *         prints and errolr message if the part doesn't exist;
 *         otherwise, prompts the user to enter chainge in the 
 *         quantity on hand and updates it in database
*/
void update(void) {
    int i, number, change;

    printf("Enter part number: ");
    scanf("%d", &number);

    i = find_part(number);

    if (i >= 0) {
        printf("Enter change in quantity on hand: ");
        scanf("%d", &change);

        inventory[i].on_hand += change;
    } else
        printf("part not found.\n");
}

/**
 * Print: Prints a listing of all parts in the database,
 *        showing thepart number, part name, and quantity on hand.
*/
void print(void) {
    
    int i;

    printf("Part Number    Part Name\
            Quantity on Hand\n");

    for (i = 0; i < num_parts; i++) {
        printf("%7d      %-25s%11d\n", inventory[i].number, inventory[i].name,
                                      inventory[i].on_hand);
    }
}