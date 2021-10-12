#include<stdio.h>

int main() {
    int subject_1, subject_2, subject_3, total_marks;
    float percentage;

    printf("Enter number of Subject 1: ");
    scanf("%d", &subject_1);

    printf("\nEnter number of Subject 2 :");
    scanf("%d", &subject_2);

    printf("\nEnter number of Subject 3 :");
    scanf("%d", &subject_3);

    total_marks = subject_1+subject_2+subject_3;

    percentage = total_marks*100/300;

    if (subject_1<=32){
        printf("Student failed in subject 1\n");
    }

    if (subject_2<=32){
        printf("Student failed in subject 2\n");
    }

    if (subject_3<=32){
        printf("Student failed in subeject 3\n");
    }
    if (percentage>=40) {
        printf("Student pass!");
    }
    else{
        printf("Student failed!\nMinimum 40%% required to pass overall");
    }

}