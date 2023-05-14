//sorts numbers in ascending order using the quicksort algorithm
#include <stdio.h>

void quick_sort(int a[], int low, int high);
int split(int a[], int low, int high);

int main(void) {
    int len, i;

    printf("How many numbers do you want to sort in ascending order? ");
    scanf("%d", &len);
    
    int a[len];
    
    printf("Enter numbers to sort in ascending order: ");
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
void quick_sort(int a[], int low, int high) {
     int middle;

     if ( low >= high) return;

     middle = split(a, low, high);
     quick_sort(a, low, middle - 1);
     quick_sort(a, middle + 1, high);
}

//split function: sorts the numbers till low is >= high and places the partitioning elenment
//in the position where low >= high
int split(int a[], int low, int high) {
    int part_element = a[low];

    for (; ;) {
       while (low < high && part_element <= a[high])
          high--;
        if (low >= high) break;
        else
        a[low++] = a[high];

        while (low < high && part_element >= a[low])
          low++;
        if (low >= high) break;
        else
        a[high--] = a[low];
    }
    a[high] = part_element;
    
    return high;
}
//high is always to point (subscript) numbers greater than the partitioning element
//low is alwys to point (subscript) numbers less than the partitioning element 