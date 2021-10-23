/*
Calculate income tax paid by an employee to the government as per the slabs mentioned below:

Income Slab 	Tax
2.5L-5.0L 	    5%
6.0L-10.0L 	    20%
Above 11.0L 	30%

Note that there is no tax below 2.5L. Take income amount as an input from the user.
*/

#include<stdio.h>

int main() {
    int income, amount_including_tax;

    printf("Please enter your income amount: \n");
    scanf("%d",&income);

    if (income>= 250000 && income <= 500000){
        amount_including_tax = income * 5/100;
    }
    else if (income>= 600000 && income <= 1000000){
        amount_including_tax = income * 20/100;
    }
    else if (income >= 1100000){
        amount_including_tax = income * 30/100;
    }
    printf("Tax Amount need to pay: Rs.%d\n",amount_including_tax);
    return 0;
}