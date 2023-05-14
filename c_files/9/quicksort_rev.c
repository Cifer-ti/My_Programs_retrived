//sorts numbers in decending order by implementing the quicksort algorithm
#include <stdio.h>

void quick_sort(int a[], int low, int high);
int split(int a[], int low, int high);

int main(void) {
    int len, i;

    printf("How many numbers do you want to sort in decending order? ");
    scanf("%d", &len);
    
    int a[len];
    
    printf("Enter numbers to sort in decending order: ");
    for (i = 0; i < len; i++) {
        scanf("%d", &a[i]);
    }
    quick_sort(a, 0, len - 1);

   printf("in sorted order: ");
   for (i = 0; i < len; i++){
    printf(" %2d ", a[i]);
   }
   
   printf("\n");
   return 0;
}

//quick_sort: calls the split function to sort, 
//then divides array into two parts one which contains numbers less than the partiioning element
//and one who has numbers greater than the partitioning element 
//then calls itself to repeat the operation until low >= high
void quick_sort(int a[], int high, int low) {
    int middle;

    if (high >= low) return;

    middle = split(a, high, low);
    quick_sort(a, high, middle - 1);
    quick_sort(a, middle + 1, low);
}

//split function: sorts the numbers till high is >= low and places the partitioning elenment
//in the position where high >= low
int split(int a[], int high, int low) {
    int part_element = a[high];

    for (; ;) {
       while (high < low && part_element >= a[low])
       low--;
    
       if (high >= low) break;
       else
       a[high++] = a[low];

       while (high < low && part_element <= a[high])
       {
       high++;
       }
       if (high >= low) break;
       else
       a[low--] = a[high];
    }

    a[high] = part_element;
    return high;  
}
//high is always to point (subscript) numbers greater than the partitioning element
//low is alwys to point (subscript) numbers less than the partitioning element