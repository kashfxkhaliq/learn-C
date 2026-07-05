#include <stdio.h>
#include <math.h>

int main()
{
    int x = 0;
    double sqroot = 0.0;

    printf("Enter The Number :: ");
    scanf("%d", &x);

    if (x >= 0)
    {
       sqroot = sqrt(x);
       printf("The Square Root of %d is = %1f", x, sqroot);
    }
    
    else
    {
        printf("Invalid Input.");
    }
    
    
}
