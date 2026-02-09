#include<stdio.h>
int main() {
    int orderAmount;
    int speedType;
    printf("Enter the speedType\n");
    scanf("%d",&speedType);
    printf("Enter the orderAmount\n");
    scanf("%d",&orderAmount);

    switch (speedType) {
        case 1:
            printf("50");
            break;
        case 2:
            if (orderAmount < 1000) {
                printf("100");
            }
            else {
                printf("Free");
            }
            break;
    }
    return 0;
}