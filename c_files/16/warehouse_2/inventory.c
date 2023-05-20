#include <stdio.h>
#include "readline.h"
#include "quicksort.h"

int num_parts = 0;

int find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);


int main(void) {
    char code;

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

    
}

int find_part(int number) {
    int i;

    for (i = 0; i < num_parts; i++) {
        if (inven[i].number == number)
            return i;
    }
    return -1;
}

void insert(void) {

    int part_number, i;
    
    if (num_parts == MAX_PARTS) {
        printf("database is full can't add more parts");
        return;
    }
    
    printf("Enter part number: ");
    scanf("%d", &part_number);

    i = find_part(part_number);

    if (i >= 0) {
        printf("Part already exist");
        return;
    }
    
    inven[num_parts].number = part_number;
    printf("Enter part name: ");
    read_line(inven[num_parts].name, NAME_LEN);
    printf("Enter the quantitty on hand: ");
    scanf("%d", &inven[num_parts].on_hand);
    num_parts++;
}

void search(void) {
    int i, part_number;

    printf("Enter part number: ");
    scanf("%d", &part_number);

    i = find_part(part_number);

    if (i < 0) { 
        printf("Part not found");
        return;
    }

    printf("part name: %s", inven[i].name);
    printf("quantity on hand: %d", inven[i].on_hand);
}

void update(void) {
    int i, part_number;

    printf("Enter part number to");
    scanf("%d", &part_number);

    i = find_part(part_number);

    if (i < 0) {
        printf("part does not exist");
        return;
    }

    printf("Enter change in quantity on hand: ");
    scanf("%d", &inven[i].on_hand);
}

void print(void) {
    int i;

    quick_sort(inven, 0, num_parts -1 );

    for (i = 0; i < num_parts; i++)
        printf("%7d     %-25s%11d\n", 
               inven[i].number, inven[i].name, inven[i].on_hand);
}
