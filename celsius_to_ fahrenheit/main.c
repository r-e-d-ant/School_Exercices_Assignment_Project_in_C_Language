#include <stdio.h>
void main()
{
    float c_temperature, f_temperature;

    // ask tempurature in celsius
    printf("Please enter Temperature in Celsius:\n");
    scanf("%f", &c_temperature);

    // convert temperature from °Celsius to °Fahrenheit
    // formula: (deg_in_celsius * 9/5) + 32;
    f_temperature = (c_temperature * 9/5) + 32;

    printf("%f Celsius in Fahreneit is: %f", c_temperature, f_temperature);
    printf("\n");
    return;
}
