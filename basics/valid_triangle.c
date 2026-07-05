#include <stdio.h>

void triangle(int x, int y, int z)
{
    int sum;
    sum = x + y + z;
    if (sum == 180)
    {
        printf("It is a Valid Triangle.");
    }
    
    else
    {
        printf("It is not a Valid Triangle");
    }
}

void main()
{
    int a, b, c;

    printf("Enter The First Angle :: ");
    scanf("%d", &a);

    printf("Enter The Second Angle :: ");
    scanf("%d", &b);

    printf("Enter The Third Angle :: ");
    scanf("%d", &c);

    triangle(a, b, c);

}