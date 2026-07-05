#include <stdio.h>

int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter Value in Element %d :: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Values in Reverse Order : \n");
    for (int i = 4; i >= 0; i--)
    {
        printf("%d \n", arr[i]);
    }
}
