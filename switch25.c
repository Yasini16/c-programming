#include<stdio.h>
int main() {
    int stdCategory;
    printf("Enter the stdCategory\n");
    scanf("%d",&stdCategory);

    switch(stdCategory) {
        case 1:
            printf("1200");
            break;
        case 2:
            printf("800");
            break;
        case 3:
            printf("500");
            break;
        default:
    }
    return 0;
}