#include<stdio.h>

int main() {
    int num;
    printf("Please Enter a number to check divisbility by 97: ");
    scanf("%d", &num);

    if (num%97==0){
        printf("Number divisibility by 97");
    }
    else{
        printf("Number not divisibility by 97");
    }
}