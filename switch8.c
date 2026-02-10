#include<stdio.h>
int main() {
    int marks;
    int attendance;
    printf("Enter the marks\n");
    scanf("%d",&marks);
    printf("Enter the attendance\n");
    scanf("%d",&attendance);
    if(marks>=75){
        printf("Distinction");
    }
    else if (marks>=50 && marks<=74) {
        printf("Pass");
    }
    else if (attendance<75 || marks<50) {
        printf("Fail");
    }
    return 0;
}