#include <stdio.h>

int add(int a, int b)
{
    int result;
    result = a + b;
    return result;
}

int main()
{
    int num_1, num_2;
    int sum;

    printf("Enter The First Number :: ");
    scanf("%d", &num_1);

    printf("Enter The Second Number :: ");
    scanf("%d", &num_2);

    sum = add(num_1, num_2);

    printf("The Sum of %d and %d is %d", num_1, num_2, sum);
}