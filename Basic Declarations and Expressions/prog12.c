#include<stdio.h>
/*
Write a C program that accepts an employee's ID, total worked hours of a month and the amount he received per hour. Print the employee's ID and salary (with two decimal places) of a particular month.
Test Data :
Input the Employees ID(Max. 10 chars): 0342
Input the working hrs: 8
Salary amount/hr: 15000
Expected Output:
Employees ID = 0342
Salary = U$ 120000.00
*/
int main()
{
    char id[10];
    int work;
    double s_amt,salary;

    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%s",&id);
    printf("Input the working hrs: ");
    scanf("%d",&work);
    printf("Salary amount/hr: ");
    scanf("%lf",&s_amt);

    printf("Employees ID = %s\n",id);
    salary = work * s_amt;
    printf("Salary = U$ %.2lf\n", salary);
    return 0;
}
