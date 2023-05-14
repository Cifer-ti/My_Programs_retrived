/*
 *Gets a 24 hour time format
 * from the user and 
 *displays it in 12 hour format
 */
#include <stdio.h>

int main(void)

{
 int a,s,f;

 printf("Enter a 24 hour time: ");
 scanf("%d:%d", &a, &f);
 s = (a-12);
 if (a<12)
 {
     printf("The equivalent 12 hour time: %.2d:%.2d AM\n", a, f);
 }
 else 
    if (a==12)
  printf("The equivalent 12 hour time: %.2d:%.2d PM\n", a, f);
  else
  {
     if (a>12 && a<24)
     {
        printf("The equivalent 12 hour time: %.2d:%.2d PM\n", s, f);

     }
     if (a==24)
     {
         printf("The equivalent 12 hour time: 12:%.2d AM", f);
     }

 }

 return 0;

}
