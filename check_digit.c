#include <stdio.h>

void main()
{
    char ch;

    printf("Enter a Character [0 to 9] :: ");
    scanf(" %c", &ch);

    if (ch >= '0' && ch <= '9')
    {
       printf("DIGIT\n");
    }

    else
    {
        printf("NOT DIGIT\n");
    }   
}
