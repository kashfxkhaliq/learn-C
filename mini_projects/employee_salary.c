#include <stdio.h>

int main()
{
    int pay_rate_per_hour, working_hour, overtime_rate , overtime_hours;
    int basic_salary, overtime_salary, total_salary;

    printf("Enter The pay Rate Per Hour :: ");
    scanf("%d", &pay_rate_per_hour);

    printf("Enter The Working Hour :: ");
    scanf("%d", &working_hour);

    printf("Enter Overtime Pay Rate Per Hour :: ");
    scanf("%d", &overtime_rate);

    printf("Enter Overtime Working Hour :: ");
    scanf("%d", &overtime_rate);
    
    basic_salary = pay_rate_per_hour * working_hour;
    overtime_salary = overtime_rate * overtime_hours;
    total_salary = basic_salary + overtime_salary;

    printf("The Basic Salary Of Employee is = %d\n ", basic_salary);
    printf("The Overtime Salary of Employee is = %d\n " , overtime_salary);
    printf("The Total Salary of Employee is = %d\n", total_salary);
    




   
}
