#include<stdio.h>

// octal value to binary value.....

int power(int base, int exponent)
{
    int power = 1;

    if (exponent == 0)
    {

        return power;
    }

    for (int i = 1; i <= exponent; i++)
    {
        power = power * base;
    }
    return power;
}

int oct_to_dec(int oct_val)
{
     int reminder;
     int exponent = 0, dec_val = 0;

    while (oct_val > 0)
    {
        reminder = oct_val % 10; 
        oct_val = oct_val / 10;
        dec_val += reminder * power(8, exponent);  
        exponent++;
    }

    printf("%d" , dec_val);
}

void main(int argc, char const *argv[])
{
   int oct_val;
   
   printf("Enter the Octal value :: ");
   scanf("%d" , &oct_val);

   oct_to_dec(oct_val);
   
}
