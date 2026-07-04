#include <stdio.h>

int main()
{
   float total_bill, paid_bill;
   float discount; 

    printf("Enter The Total Bill :: ");
    scanf("%f", &total_bill);

    if(total_bill >= 1000 && total_bill < 2500)
    {
        discount = total_bill * 10.0 / 100.0;
    }

    else if (total_bill >= 2500 && total_bill < 5000)
    {
        discount = total_bill * 20.0 / 100.0;
    }
    
    else if (total_bill >= 5000 && total_bill < 10000)
    {
        discount = total_bill * 35.0 / 100.0;
    }
       
    else
        discount = total_bill * 50.0 / 100.0;
    
    paid_bill = total_bill - discount;
    printf("User has got Discount : %f\n", discount);
    printf("Discounted Price is : %f\n", paid_bill);

  
}
