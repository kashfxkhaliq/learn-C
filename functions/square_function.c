#include <stdio.h>

int square(int num)
{
    return num * num;
}

int main()
{
    int number, result;

    printf("Enter Any Positive Integer Value   :: ");
    scanf("%d", &number);

    result = square(number);

    printf("Square of %d is %d", number, result);
}