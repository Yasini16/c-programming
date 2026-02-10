#include<stdio.h>
int main() {
    int distanceCategory;
    scanf("%d",&distanceCategory);

    switch(distanceCategory) {
        case 1:
            distanceCategory <= 5;
            printf("Transport Fee 800");
            break;
        case 2:
            distanceCategory >= 6 && distanceCategory <= 10;
            printf("Transport Fee 1200");
            break;
        case 3:
            distanceCategory == 10;
            printf("Transport Fee 1800");
            break;
        default:
    }
    return 0;
}