#include <stdio.h>

int factorial(int num)
{
    int fact = 1;

    for (int i = 1; i <= num; i++)
        fact = fact * i;
    return fact;
}

int main()
{
    int number, result;

    printf("Enter Any Positive Integer Value   :: ");
    scanf("%d", &number);

    result = factorial(number);

    printf("The Calculated Factorial of Input Number is %d and %d", number, result);
}