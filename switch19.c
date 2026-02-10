#include<stdio.h>
int main() {
    int userCategory;
    int distanceTravelled;
    printf("Enter the userCategory\n");
    scanf("%d",&userCategory);
    printf("Enter the distanceTravelled\n");
    scanf("%d",&distanceTravelled);

    switch (userCategory) {
        case 1:
            if (distanceTravelled<=30) {
                printf("Eligible");
            }
            else {
                printf("Eligible with Extra Fee");
            }
            break;
        case 2:
            if (distanceTravelled<=30) {
                printf("Eligible");
            }
            else {
                printf("Not Eligible");
            }
            break;
        default:
    }
    return 0;
}