#include<stdio.h>
int main() {
    int courseMode;
    char stdCategory;
    printf("Enter the courseMode\n");
    scanf("%d",&courseMode);
    printf("Enter the stdCategory\n");
    scanf("%c",&stdCategory);

    switch (courseMode) {
        case 1:
            if (stdCategory == 'R' || stdCategory == 'r') {
                printf("5000");
            }
            else if (stdCategory == 'S' || stdCategory == 's') {
                printf("3000");
            }
            else {
                printf("Invalid");
            }
            break;
        case 2:
            if (stdCategory == 'R' || stdCategory == 'r') {
                printf("9000");
            }
            else if (stdCategory == 'S' || stdCategory == 's') {
                printf("7000");
            }
            else {
                printf("Invalid");
            }
            break;
        default:
    }
    return 0;
}