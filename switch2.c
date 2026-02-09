#include<stdio.h>
int main() {
    int marks;
    printf("Enter the marks\n");
    scanf("%d",&marks);

    switch (marks/10) {
        case 9:
            if(marks>=90 && marks<=100) {
                printf("Grade A");
            }
            break;
        case 8:
            if(marks>=80 && marks<=89) {
                printf("Grade B");
            }
            break;
        case 7:
            if(marks>=70 && marks<=79) {
                printf("Grade C");
            }
            break;
        case 6:
            if(marks>=60 && marks<=69) {
                printf("Grade D");
            }
            break;
        case 5:
            if(marks>=50 && marks<=59) {
                printf("Grade E");
            }
            break;
        case 4:
            if(marks>=40 && marks<=49) {
                printf("Grade F");
            }
            break;
        case 3:
            if(marks>=30 && marks<=39) {
                printf("Grade Supplementary");
            }
            break;
        case 2:
            if(marks>=29) {
                printf("Fail");
            }
            break;
        default:
    }
    return 0;
}