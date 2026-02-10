#include<stdio.h>
int main() {
    int fuelType;
    int liters;
    int cost;
    printf("Enter the fuelType\n");
    scanf("%d",&fuelType);
    printf("Enter the liters\n");
    scanf("%d",&liters);

    switch (fuelType) {
        case 1:
            cost=liters*105;
            printf("Fuel cost %d",cost);
            break;
        case 2:
            cost=liters*92;
            printf("Fuel cost %d",cost);
            break;
        case 3:
            cost=liters*85;
            printf("Fuel cost %d",cost);
            break;
        default:
    }
    return 0;
}