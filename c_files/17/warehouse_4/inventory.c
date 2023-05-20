//maintains the parts of a database (modified)

#include <stdio.h>
#include <stdlib.h>
#include "readline.h"

#define NAME_LEN 25

struct part {
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
} *inventory;

int max_alloc = 10;
int num_parts = 0;

int find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);
int compare_parts(const void *p, const void *q);

int main(void) {

    char code;

    inventory = malloc(sizeof(struct part) * max_alloc);
    if (!inventory) {
        printf("failed to allocate");
        exit(EXIT_FAILURE);
    }

    for (; ;) {
        printf("Enter operation code: ");
        scanf(" %c", &code);
        while (getchar() != '\n')
            ;
        switch(code) {
            case 'i': 
                insert(); break;
            case 's': 
                search(); break;
            case 'u': 
                update(); break;
            case 'p': 
                print(); break;
            case 'q': return 0;

            default: 
                printf("invalid code\n");
                break;
        }
        printf("\n");
    }
    return 0;
}

int find_part(int number) {

    int i;

    for (i = 0; i < num_parts; i++) {
        if (inventory[i].number == number)
            return i;
    }

    return -1;
}

void insert(void) {

    int i, number;

    if (num_parts == max_alloc) {
        inventory = realloc(inventory, sizeof(struct part) * (max_alloc *= 2));
        if (!inventory) {
            printf("realloc failed");
            exit(EXIT_FAILURE);
    }
    }

    printf("Enter part number: ");
    scanf("%d", &number);

    i = find_part(number);

    if (i >= 0) {
        printf("Part already exist");
        return;
    }

    inventory[num_parts].number = number;
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

    qsort(inventory, num_parts, sizeof(struct part), compare_parts);
    for (i = 0; i < num_parts; i++) {
        printf("%7d      %-25s%11d\n", inventory[i].number, inventory[i].name,
                                      inventory[i].on_hand);
    }
}

int compare_parts(const void *p, const void *q) {

    const struct part *p1 = p;
    const struct part *q1 = q;

    if (p1->number < q1->number)
        return -1;
    else if (p1->number == q1->number)
        return 0;
    else return 1;

}
