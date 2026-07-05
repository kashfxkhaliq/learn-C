#include <stdio.h>

int main()
{
    float marks[4], total_marks;

    printf("Enter Marks in 1st Subject :: ");
    scanf("%f", &marks[0]);

    printf("Enter Marks in 2nd Subject :: ");
    scanf("%f", &marks[1]);

    printf("Enter Marks in 3rd Subject :: ");
    scanf("%f", &marks[2]);

    printf("Enter Marks in 4th Subject :: ");
    scanf("%f", &marks[3]);

    total_marks = marks[0] + marks[1] + marks[2] + marks[3];

    printf("Total Marks of a student in 4 Subjects are %.1f", total_marks);
}
