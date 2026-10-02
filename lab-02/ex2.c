#include <stdio.h>
#include <ctype.h>

float fromCelsiusToFahrenheit(float temp)
{
    return temp * 1.8 + 32;
}

float fromCelsiusToKelvin(float temp)
{
    return temp + 273.15;
}

float fromFahrenheitToCelsius(float temp)
{
    return (temp - 32) * 5 / 9;
}

float fromFahrenheitToKelvin(float temp)
{
    return fromCelsiusToKelvin(fromFahrenheitToCelsius(temp));
}

float formKelvinToCelsius(float temp)
{
    return temp - 273.15;
}

float formKelvinToFahrenheit(float temp)
{
    return fromCelsiusToFahrenheit(formKelvinToCelsius(temp));
}

int main()
{

    // https://www.geeksforgeeks.org/c/rounding-floating-point-number-two-decimal-places-c-c/
    const char *round_decimal = "%.2f";
    /*
    The minimum existing temperature is -273.15°C;

    Convert Celsius to Fahrenheit using the °F = (°C x 1.8) + 32 or °F = °C x 9/5 + 32
    Convert Fahrenheit to Celsius with the °C = (°F - 32) x 5/9
    Celsius = Kelvin - 273.15
    */
    double temp;
    char from_scale, to_scale;

    scanf("%lf %c %c", &temp, &from_scale, &to_scale);

    // https://stackoverflow.com/questions/2661766/how-do-i-lowercase-a-string-in-c#2661788
    from_scale = tolower(from_scale);
    to_scale = tolower(to_scale);

    if (!(from_scale == 'c' || from_scale == 'k' || from_scale == 'f') || !(to_scale == 'c' || to_scale == 'k' || to_scale == 'f'))
    {
        printf("ERROR");
        return 0;
    }

    // printf("%f", no1);
    // printf("%f", no2);
    // printf("\n");

    if (from_scale == 'c')
    {
        if (temp < -273.15)
        {
            printf("ERROR");
        }
        else if (to_scale == 'f')
        {
            printf(round_decimal, fromCelsiusToFahrenheit(temp));
        }
        else if (to_scale == 'k')
        {
            printf(round_decimal, fromCelsiusToKelvin(temp));
        }
        else
        {
            printf(round_decimal, temp);
        }
    }
    else if (from_scale == 'f')
    {
        // printf("%f\n", temp);
        if (temp < -459.67)
        {
            printf("ERROR");
        }
        else if (to_scale == 'c')
        {
            printf(round_decimal, fromFahrenheitToCelsius(temp));
        }
        else if (to_scale == 'k')
        {
            printf(round_decimal, fromFahrenheitToKelvin(temp));
        }
        else
        {
            printf(round_decimal, temp);
        }
    }
    else if (from_scale == 'k')
    {
        if (temp < 0.00)
        {
            printf("ERROR");
        }
        else if (to_scale == 'c')
        {
            printf(round_decimal, formKelvinToCelsius(temp));
        }
        else if (to_scale == 'f')
        {
            printf(round_decimal, formKelvinToFahrenheit(temp));
        }
        else
        {
            printf(round_decimal, temp);
        }

        return 0;
    }
}