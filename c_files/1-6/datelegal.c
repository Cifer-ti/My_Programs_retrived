/*comments on grades*/
/*Test switch function*/

#include <stdio.h>

int main(void)
{
    int grade;

    printf("Enter your grade: ");
    scanf("%d", &grade);
   
   switch (grade)
   {
   case 4: printf("Excell"); 
   break;
    case 3: printf("Good");
      break;
      case 2: printf("Average");
      break;
      case 1: printf("poor");
      break;
      case 0: printf("failed");
      break;

   default: printf("illegal");
    break;
   }
    return 0;
}
