#include <stdio.h>

void main()
{
    int year;

    printf("Enter The Year :: ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not Leap Year");
    }   
}