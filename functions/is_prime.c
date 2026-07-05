#include <stdio.h>

int isPrime(int x)
{
    if (x <= 1) // Numbers less than or equal to 1 are not prime
    { 
        return 0;
    }

    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
        return 1;
    }
}

int main()
{
    int number, result;

    printf("Enter The Number :: ");
    scanf("%d", &number);

    result = isPrime(number);

    if (result == 1)
    {
        printf("%d is a Prime Number", number);
    }

    else
    {
        printf("%d is not a Prime Number", number);
    }
}
