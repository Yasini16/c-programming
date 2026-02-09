#include<stdio.h>
int main() {
    int planType;
    float dataUsed;
    printf("Enter the planType\n");
    scanf("%d",&planType);
    printf("Enter the data used\n");
    scanf("%f",&dataUsed);

    switch (planType) {
        case 1:
            if (dataUsed<=1) {
                printf("Normal Speed");
            }
            else {
                printf("Speed Reduced");
            }
            break;
        case 2:
            if (dataUsed<=2) {
                printf("Normal Speed");
            }
            else {
                printf("Extra Charges Applied");
            }
            break;
        default:    
    }
    return 0;
}