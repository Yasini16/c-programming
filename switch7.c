#include<stdio.h>
int main() {
    int accountType;
    int years;
    printf("Enter the accountType\n");
    scanf("%d",&accountType);
    printf("Enter the years\n");
    scanf("%d",&years);

    switch (accountType) {
        case 1:
            printf("4%");
            break;
        case 2:
            if (years<=3) {
                printf("5%");
            }
            else {
                printf("7%");
            }
            break;
        default:
    }
    return 0;
}