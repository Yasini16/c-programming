#include<stdio.h>
int main() {
    int vehicleCategory;
    int vehicleAge;
    printf("Enter the vehicleCategory\n");
    scanf("%d",&vehicleCategory);
    printf("Enter the vehicleAge\n");
    scanf("%d",&vehicleAge);

    switch (vehicleCategory) {
        case 1:
            if (vehicleAge<=5) {
                printf("1500");
            }
            else {
                printf("2500");
            }
            break;
        case 2:
            if (vehicleAge<=5) {
                printf("4000");
            }
            else {
                printf("6000");
            }
            break;
        default:
    }
    return 0;
}