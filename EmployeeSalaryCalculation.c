// C Program to calculate salary of an Employee after allowances and deduction
/*
    Few conditions are following:-
    if basic salary <= 20,000, House Rent Allowance = 20%, tax liablity = 0%, Other Allowances = 10%
    if basic salary <= 40,000 but > 20,000, House Rent Allowance = 25%, tax liablity = 0%, Other Allowances = 20%
    if basic salary <= 60,000 but > 40,000, House Rent Allowance = 30%, tax liablity = 15%, Other Allowances = 30%
    if basic salary > 60,000, House Rent Allowance = 40%, tax liablity = 35%, Other Allowances = 50%
*/

#include <stdio.h>
int main()
{
    float basic_salary, house_rent_allowance, tax_slab, other_allowances, gross_salary;
    printf("Enter Your Monthly Basic Salary : ");
    scanf("%f", &basic_salary);

    if (basic_salary <= 20000)
    {
        house_rent_allowance = basic_salary * 0.2;
        other_allowances = basic_salary * 0.1;
        tax_slab = basic_salary * 0;
        gross_salary = basic_salary + house_rent_allowance + other_allowances - tax_slab;
        printf("HRA is : Rs%.f\n", house_rent_allowance);
        printf("Other Allowance is : Rs%.f\n", other_allowances);
        printf("Tax Liablity is : Rs%.f\n", tax_slab);
        printf("Gross Salary is : Rs%.f", gross_salary);
    }

    else if (basic_salary <= 40000)
    {
        house_rent_allowance = basic_salary * 0.25;
        other_allowances = basic_salary * 0.2;
        tax_slab = basic_salary * 0;
        gross_salary = basic_salary + house_rent_allowance + other_allowances - tax_slab;
        printf("HRA is : Rs%.f\n", house_rent_allowance);
        printf("Other Allowance is : Rs%.f\n", other_allowances);
        printf("Tax Liablity is : Rs%.f\n", tax_slab);
        printf("Gross Salary is : Rs%.f", gross_salary);
    }

    else if (basic_salary <= 60000)
    {
        house_rent_allowance = basic_salary * 0.30;
        other_allowances = basic_salary * 0.30;
        tax_slab = basic_salary * 0.15;
        gross_salary = basic_salary + house_rent_allowance + other_allowances - tax_slab;
        printf("HRA is : Rs%.f\n", house_rent_allowance);
        printf("Other Allowance is : Rs%.f\n", other_allowances);
        printf("Tax Liablity is : Rs%.f\n", tax_slab);
        printf("Gross Salary is : Rs%.f", gross_salary);
    }

    else
    {
        house_rent_allowance = basic_salary * 0.4;
        other_allowances = basic_salary * 0.5;
        tax_slab = basic_salary * 0.35;
        gross_salary = basic_salary + house_rent_allowance + other_allowances - tax_slab;
        printf("HRA is :Rs%.f\n", house_rent_allowance);
        printf("Other Allowance is : Rs%.f\n", other_allowances);
        printf("Tax Liablity is : Rs%.f\n", tax_slab);
        printf("Gross Salary is :  Rs%.f", gross_salary);
    }
}