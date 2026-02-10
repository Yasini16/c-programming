#include<stdio.h>
int main() {
    int planType;
    printf("Enter the planType\n");
    scanf("%d",&planType);

    switch (planType) {
        case 1:
            printf("Speed 40 Mbps");
            break;
        case 2:
            printf("Speed 100Mbps");
            break;
        case 3:
            printf("Speed 300Mbps");
            break;
        default:
    }
    return 0;
}