#include<stdio.h>
int main() {
    int vehicleType;
    int trips;
    int charge;
    printf("Enter the vehicleType\n");
    scanf("%d",&vehicleType);
    printf("Enter the trips\n");
    scanf("%d",&trips);

    switch (vehicleType) {
        case 1:
            if (trips==1) {
                printf("100");
            }
            else if (trips>=2 && trips<=10){
                printf("800");
            }
            else if (trips>10) {
                printf("800");
            }
            else {
                printf("Invalid");
            }
            break;
        case 2:
            charge=trips*240;
            printf("%d ",charge);
            break;
        default:
    }
    return 0;
}