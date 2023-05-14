/* Converts a Fahareit temperature to Celsius*/

#include <stdio.h>
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
{
    float Fahareit, Celsius;
    printf("Enter the temperature in Fahareit: ");
    scanf("%f", &Fahareit);

    Celsius = (Fahareit - FREEZING_PT) * SCALE_FACTOR;
     
    printf("The equivalent Celius temperature is: %.1f\n", Celsius);

    return 0;
}
