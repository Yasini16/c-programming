#include<stdio.h>
int main() {
    int attemptCount;
    int marks;
    printf("Enter the attemptCount\n");
    scanf("%d",&attemptCount);
    printf("Enter the marks\n");
    scanf("%d",&marks);

    switch (attemptCount) {
        case 1:
            if (marks>=80) {
                printf("Excellent");
            }
            else {
                printf("Not Qualified");
            }
            break;
        case 2:
            if (marks>=60) {
                printf("Good");
            }
            else {
                printf("Not Qualified");
            }
            break;
        case 3:
            if (marks<60) {
                printf("Needs Improvement");
            }
            break;
        default:
    }
    return 0;
}