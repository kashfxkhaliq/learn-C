#include <stdio.h>

int main()
{
    // temperature convert celsius to fahrenheit
    float celsius, fahrenheit;
    
    printf("Enter The Celsius Temperature :: ");
    scanf("%f", &celsius);

    fahrenheit = 9.0 / 5.0 * celsius + 32;
    printf("Fahrenheit Temperature is : %f\n", fahrenheit);

}
