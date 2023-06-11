#include <stdio.h>
#include <stdlib.h>

float convertCelciusToFahrenheit(float value)
{
    float fahrenheit;
    fahrenheit = (1.8 * value) + 32;
    return fahrenheit;
}

float convertFahrenheitToCelcius(float value)
{
    float celcius;
    celcius = (5.0 / 9) * (value - 32);
    return celcius;
}

int main()
{
    int choice;
    float value;

    printf("Please make a selection:\n\n");
    printf("------------------\n");
    printf("1- Convert Celsius to Fahrenheit\n");
    printf("2- Convert Fahrenheit to Celsius\n");
    printf("------------------\n\n");
    printf("Your choice: ");
    scanf("%d", &choice);

    printf("Please enter a value: ");
    scanf("%f", &value);

    switch (choice)
    {
        case 1:
            printf("\n\n%.1f Celsius = %.1f Fahrenheit\n\n", value, convertCelciusToFahrenheit(value));
            break;

        case 2:
            printf("\n\n%.1f Fahrenheit = %.1f Celsius\n\n", value, convertFahrenheitToCelcius(value));
            break;

        default:
            printf("You made an invalid choice!\n");
            break;
    }

    return 0;
}
