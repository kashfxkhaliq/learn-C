#include <stdio.h>

int main()
{
    float seconds, minute, hour;

    printf("Enter The Number :: ");
    scanf("%f", &seconds);

    minute = seconds / 60;
    hour = minute / 60;

    printf("Number of Minutes are :: %f\n", minute);
    printf("Number of Hours are :: %f\n", hour);
}
