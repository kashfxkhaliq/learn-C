#include <stdio.h>

int main()
{
    char ch;

    printf("Enter Any Character :: ");
    scanf("%c", &ch);

    if ((ch >= 'A') && (ch <= 'Z'))
    {
        printf("The Character %c is a capital letter.\n", ch);
    }

    else if ((ch >= 'a') && (ch <= 'z'))
    {
        printf("The Character %c is a small letter.\n", ch);
    }

    else if ((ch >= '0') && (ch <= '9'))
    {
        printf("The Character %c is a Digit.\n", ch);
    }
    
    else
    {
        printf("The Character %c is a symbol.\n", ch);
    }
    
    

   
}
