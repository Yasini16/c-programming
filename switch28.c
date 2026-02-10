#include<stdio.h>
int main() {
    int roomType;
    printf("Enter the roomType\n");
    scanf("%d",&roomType);

    switch (roomType) {
        case 1:
            printf(" Hostel Fee :80000");
            break;
        case 2:
            printf("Hostel Fee :60000");
            break;
        case 3:
            printf("Hostel Fee :45000");
            break;
        default:
    }
    return 0;
}