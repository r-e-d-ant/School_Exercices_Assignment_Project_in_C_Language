#include <stdio.h>
void main()
{
    float c_temperature, f_temperature;

    // ask tempurature in Fahreneit
    printf("Please enter Temperature in Fahreneit:\n");
    scanf("%f", &f_temperature);

    // convert temperature from °Celsius to °Fahrenheit
    // formula: (deg_in_fahreneit * 9/5) + 32;
    c_temperature = (f_temperature - 32) * 5/9;

    printf("%f Fahreneit in Celsius is: %f", f_temperature, c_temperature);
    printf("\n");
    return;
}
