#include <stdio.h>

int main()
{
    int temp[5];

    printf("Enter Value in 1st Element of Temp :: ");
    scanf("%d", &temp[0]);

    printf("Enter Value in 2nd Element of Temp :: ");
    scanf("%d", &temp[1]);
    
    printf("Enter Value in 3rd Element of Temp :: ");
    scanf("%d", &temp[2]);

    printf("Enter Value in 4th Element of Temp :: ");
    scanf("%d", &temp[3]);

    printf("Enter Value in 5th Element of Temp :: ");
    scanf("%d", &temp[4]);

    printf("Values in Array Temp are :: \n");
    printf("%d\n", temp[0]);
    printf("%d\n", temp[1]);
    printf("%d\n", temp[2]);
    printf("%d\n", temp[3]);
    printf("%d\n", temp[4]);
}
