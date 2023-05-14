//determines the closest departure and arrival time
#include <stdio.h>

int main(void) {
    int usr_tm_hr, usr_tm_min, comp,
    //departure time converted in minutes from midnight
      t0 = 489,
      t1 = 583,
      t2 = 679,
      t3 = 767,
      t4 = 840,
      t5 = 945,
      t6 = 1140,
      t7 = 1305;      

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &usr_tm_hr, &usr_tm_min);
    
    //convert usr time in minutes from mifnight
    comp = (usr_tm_hr * 60) + usr_tm_min;

    if (comp <= t0 || comp >= t7)
       printf("closest departure time is 8:00 a.m, arrinving at 10:16 a.m");
    else
    if (comp >= t0 && comp <= t1)
       printf("closest departure time is 9:43 a.m, arrinving at 11:52 a.m");
    else
    if (comp >= t1 && comp <= t2) 
       printf("closest departure time is 11:19 a.m, arrinving at 1:31 p.m");
    else
    if (comp >= t2 && comp <= t3)
       printf("closest departure time is 12:47 a.m, arrinving at 3:00 p.m");
    else
    if (comp >= t3 && comp <= t4)
       printf("closest departure time is 2:00 p.m, arrinving at 4:08 p.m");
    else
    if (comp >= t4 && comp <= t5)
       printf("closest departure time is 3:45 p.m, arrinving at 5:55 p.m");
    else
    if (comp >= t5 && comp <= t6)
       printf("closest departure time is 7:00 p.m, arrinving at 9:20 p.m");
    else
    if (comp >= t6 && comp <= t7)
       printf("closest departure time is 9:45 p.m, arrinving at 11:58 p.m");

    printf("\n");
    return 0;
}