#include <stdio.h>

void main()
{
   int num_1;
   int num_2; 
   
    printf("Enter The First Number :: ");
    scanf("%d", &num_1);

    printf("Enter The Second Number :: ");
    scanf("%d", &num_2);

    if(num_2 % num_1 == 0)
    {
        printf("First Number is a  Factor of Second Number");
    }
    else
        printf("First Number is not a Factor of Second Number");
}
