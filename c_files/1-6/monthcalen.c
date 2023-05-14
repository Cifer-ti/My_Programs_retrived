#include<stdio.h>
int main(){
   int i,noofdays;
   int first;
   printf("enter number of days in the month: ");
   scanf("%d",&noofdays);
   printf("enter first day in a month (1=sun, 7= sat): ");
   scanf("%d",&first);
   if (first > 7 || noofdays > 31)
    {
    printf("Inputs are not valid");
   }
   else
   {
    for(i=0;i<first;i++)
   {
      printf("  ");
   }
   for(i=1;i<=noofdays;i++)
   {
      printf("%3d",i);
      if((first+i-1)%7==0)
         printf(" \n");
   }
   }
   
   
   return 0;
}