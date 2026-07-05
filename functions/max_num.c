#include <stdio.h>

int largest(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
    
}

int main() 
{
    int num_1, num_2;
    int sum;

    printf("Enter The First Number :: ");
    scanf("%d", &num_1);

    printf("Enter The Second Number :: ");
    scanf("%d", &num_2);

    printf("Largest Number is %d", largest(num_1, num_2));
   
}
