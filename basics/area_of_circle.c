#include <stdio.h>

int main()
{
    float radius, PI, area;
    PI = 3.1417;

    printf("Enter The Radius of Circle :: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    
    printf("Area of a Circle is : %f\n", area);
}
