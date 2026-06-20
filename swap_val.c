#include <stdio.h>

int main()
{
   int a, b;

    printf("Enter The First Number :: ");
    scanf("%d", &a);
  
    printf("Enter The Second Number :: ");
    scanf("%d", &b);

    printf("Values Before Swaping\n");
    printf("The Value of a is %d and Value of b is %d",a, b);

    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("\nValues After Swaping\n");
    printf("The Value of a is %d and Value of b is %d",a, b);
   
}
