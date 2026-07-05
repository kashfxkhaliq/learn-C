#include <stdio.h>

int main()
{
    int arr[] = {2, 3, 54, 22, 67, 34, 29, 19};
    int brr[] = {65, 73, 26, 10, 4, 2, 84, 26};

    for (int i = 0; i < 8; i++)
    {
        printf("%d + %d = %d \n", arr[i], brr[i], arr[i] + brr[i]);
    }
}
