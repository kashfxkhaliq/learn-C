#include <stdio.h>

int main()
{
    int hypotenuse, base, height;

    printf("Enter The value of Base :: ");
    scanf("%d", &base);

    printf("EnterThe value of Height :: ");
    scanf("%d", &height);

    printf("EnterThe value of Hypotenuse :: ");
    scanf("%d", &hypotenuse);

    if (hypotenuse * hypotenuse == (base * base + height * height))
    {
        printf("It is a Right Angle Triangle");
    }
    else
    {
        printf("It is not a Right Angle Triangle");
    }
}
