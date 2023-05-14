#include <stdio.h>

int main()
{
   int item_num,purchase_date, mon, day, year;
   float  unit_price;
   printf("Enter item number: ");
   scanf("%d", &item_num);
   printf("Enter unit price: ");
   scanf("%f", &unit_price);
   printf("Enter purchase_date (mm/dd/yyyy): ");
   scanf("%d/%d/%d", &mon, &day, &year);
   
   printf("item\t\t unit\t\t purchase\n\t\t price\t\t date\n%d\t\t $%.2f\t\t %d/%d/%d\n", item_num, unit_price, mon, day, year);
   return 0;
}