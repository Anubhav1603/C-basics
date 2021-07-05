#include<stdio.h>
/*
Write a C program to print the following characters in a reverse way.
Test Characters: 'X', 'M', 'L'
Expected Output:
The reverse of XML is LMX
*/

int main()
{
    char x_char = 'X';
    char m_char = 'M';
    char l_char = 'L';
    printf(
        "Reverse order of %c%c%c is %c%c%c",
        x_char,m_char,l_char,
        l_char,m_char,x_char
    );
    return 0;
}
