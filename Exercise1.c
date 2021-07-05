#include<stdio.h>
/*
Print multiplication table of a number entered by a user in pretty form

Example:

Input:
Enter the number you want multiplication of:
6

Output:
Table of 6:
6 X 1 = 6
6 X 2 = 12
.
.
.
6 X 10 = 60
*/

int main(int argc, char const *argv[])
{
    int num;
    printf('Enter the number you want multiplication of:\n');
    scanf('%d', &num);
    printf('Table of 6 X 1 = %d', (num * 1));
    printf('Table of 6 X 2 = %d', (num * 2));
    return 0;
}
