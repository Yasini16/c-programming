#include<stdio.h>
int main() {
    int deliveryMode;
    printf("Enter the deliveryMode\n");
    scanf("%d",&deliveryMode);

    switch (deliveryMode) {
        case 1:
            printf("40");
            break;
        case 2:
            printf("120");
            break;
        case 3:
            printf("Free");
            break;
        default:
    }
    return 0;
}