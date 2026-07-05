#include <stdio.h>

// Print Table using nested loop
int main()
{
    for (int i = 2; i <= 6; i++)
    {
       printf("Table of %d\n", i);

       for (int j = 0; j <= 10; j++)
       {
            printf("%d X %d = %d\n", i, j, i * j);
       }
       
    }
    
}