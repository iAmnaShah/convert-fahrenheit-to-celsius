#include<stdio.h>
float temp_celsius();
void main()
{
    float celsius;
    int temp;

    celsius = temp_celsius();

    return 0;
}

float temp_celsius()
{
    int temp=0;
    float c;
    for(temp=32; temp<=212; temp++)
    {
        c = (temp-32)*5/9;
        printf("F = %d     C = %.1f\n",temp,c);
    }
    return c;
}
