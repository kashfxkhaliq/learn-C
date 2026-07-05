#include <stdio.h>

int main()
{
    char ch, new_ch;
    int steps;

    printf("Enter a Character :: ");
    scanf("%c", &ch);

    printf("Enter Number of Steps :: ");
    scanf("%d", &steps);

    new_ch = ch + steps;

    printf("New Character is : %c", new_ch);
}
