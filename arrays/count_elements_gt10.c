#include <stdio.h>

int main()
{
    int a[7];
    int count = 0;

    for (int i = 0; i < 7; i++)
    {
        if (a[i] > 10)
        {
            count++;
        }
        
    }
    printf("Number of element that have a value greater than 10 are %d", count);
    
}
