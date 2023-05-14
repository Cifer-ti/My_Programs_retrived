//determine the closest departure and arrival times of flights
#include <stdio.h>

int //departure and arrival time converted in minutes from midnight
    d0 = 480,  a0 = 616,
    d1 = 583,  a1 = 712,
    d2 = 679,  a2 = 811,
    d3 = 767,  a3 = 900,
    d4 = 840,  a4 = 968,
    d5 = 945,  a5 = 1075,
    d6 = 1140, a6 = 1280,
    d7 = 1305, a7 = 1438;
     

void find_closest_flight(int desired_time, int *depature_time, int *arrival_time);

int main(void) {
    int desired_time, depature_time, arrival_time, usr_hr, usr_min;

    printf("Enter a 24 hr time: ");
    scanf("%d:%d", &usr_hr, &usr_min);
    
    desired_time = (usr_hr * 60) + usr_min;
    find_closest_flight(desired_time, &depature_time, &arrival_time);
    
    printf("closest departure time is %.2d:%.2d, arriving at %.2d:%.2d", depature_time / 60, depature_time % 60, arrival_time / 60, arrival_time %60);
    printf("\n");
    return 0;
}

//find_closest_flight: determines the closest depature and arrival time
void find_closest_flight(int desired_time, int *depature_time, int *arrival_time) {
     
    if (desired_time < d0 || desired_time > d7) { 
       *depature_time = d0;
       *arrival_time = a0;
    }
    if (desired_time >= d0 && desired_time < d1 )
     {  
       *depature_time = d1;
       *arrival_time = a1;
     }
    if (desired_time >= d1 && desired_time < d2)
    {
       *depature_time = d2;
       *arrival_time = a2;
    } 
    if (desired_time >= d2 && desired_time < d3)
    {   
        *depature_time = d3;
        *arrival_time = a3;
    }
    if (desired_time >= d3 && desired_time < d4) 
    {   
        *depature_time = d4;
        *arrival_time = a4;
    }
    if (desired_time >= d4 && desired_time < d5)
    {  
       *depature_time = d5;
       *arrival_time = a5;
    }
    if (desired_time >= d5 && desired_time < d6)
    {  *depature_time = d6;
       *arrival_time = a6;
    }
    if (desired_time >= d6 && desired_time < d7)
    {
       *depature_time = d7;
       *arrival_time = a7;
    }  
}