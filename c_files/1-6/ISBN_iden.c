/*Program breaks down an ISBN entered by a users*/

#include <stdio.h>

int main(void)
{
    int a,s,d,f,g,h,j,k;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &a,&s,&d,&f,&g);
    
    printf("GSI Prefix: %d\n", a);
    printf("Group Identifier: %d\n", s);
    printf("Publisher code: %d\n", d);
    printf("Item number: %d\n", f);
    printf("Check digit: %d\n", g);
   
    return 0;
}