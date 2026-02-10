#include<stdio.h>
int main() {
    int vehicleType;
    int hours;
    int fee;
    printf("Enter the vehicleType\n");
    scanf("%d",&vehicleType);
    printf("Enter the hours\n");
    scanf("%d",&hours);

    switch (vehicleType) {
        case 1:
            if (hours>=1 && hours<=24) {
                fee=hours*10;
                printf("%d",fee);
            }
            break;
        case 2:
            if (hours>=1 && hours<=24) {
                fee=hours*20;
                printf("%d",fee);
            }
            break;
        default:
            fee=hours*20;
            printf("%d",fee);
    }
    return 0;
}