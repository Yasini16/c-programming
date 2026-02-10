#include<stdio.h>
int main() {
    int durationType;
    printf("Enter the durationType\n");
    scanf("%d",&durationType);

    switch (durationType) {
        case 1:
            printf("Membership Fee 1500");
            break;
        case 2:
            printf("Membership Fee 4000");
            break;
        case 3:
            printf("Membership Fee 7000");
            break;
        default:
    }
    return 0;
}