/* Computes the dimensional weihgt of a 12" x 8" x 10" box*/

#include <stdio.h>

int main(void)
{
    int height, length, width, volume, weight;
    height = 12;
    length = 8;
    width = 10;
    volume = height * length * width;
    weight = (volume + 165) /166;
    printf("dimensions: %dx%dx%d\n", height, length, width);
    printf("volume (cubic inches): %d\n", volume);
    printf("dimensional weight: %d\n", weight);
     return 0;



}