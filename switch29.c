#include<stdio.h>
int main() {
    int vehicleType;
    int distance;
    int fare;
    printf("Enter the vehicleType\n");
    scanf("%d",&vehicleType);
    printf("Enter the distance\n");
    scanf("%d",&distance);

    switch (vehicleType) {
        case 1:
            fare=distance*10;
            printf("Fare %d",fare);
            break;
        case 2:
            fare=distance*15;
            printf("Fare %d",fare);
            break;
        case 3:
            fare=distance*20;
            printf("Fare %d",fare);
            break;
        default:
    }
    return 0;
}