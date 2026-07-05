#include <stdio.h>

int main()
{
    int arr[5];
    int sum = 0;

    printf("Enter Five Values :: \n");

    for (int i = 0; i < 5; i++)
    {
        printf("Enter value of element of a[%d] :: ", i);
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    printf("Sum of All Element of Array is %d", sum);
}
