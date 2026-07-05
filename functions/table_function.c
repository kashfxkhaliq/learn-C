#include <stdio.h>

int table(int num)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d \n", num, i, num * i);
    }
}

int main()
{
    int number;

    printf("Enter The Number :: ");
    scanf("%d", &number);

    table(number);
}