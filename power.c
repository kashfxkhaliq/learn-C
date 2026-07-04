#include <stdio.h>

int main()
{
    int a, b;
    int result = 1;

    printf("Enter First Integer Value :: ");
    scanf("%d", &a);

    printf("Enter  Second Integer Value :: ");
    scanf("%d", &b);

    for (int i = 1; i <= b; i++)
    {
        result = result * a;
    }

    printf("%d raised to the power %d is %d", a, b, result);
}
