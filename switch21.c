#include<stdio.h>
int main() {
    int seatType;
    int showTime;
    int price;
    printf("Enter the seatType\n");
    scanf("%d",&seatType);
    printf("Enter the showTime\n");
    scanf("%d",&showTime);

    switch (seatType) {
        case 1:
            if (showTime>=18 && showTime<=24) {
                price=150+50;
                printf("%d",price);
            }
            else {
                printf("150");
            }
            break;
        case 2:
            if (showTime>=18 && showTime<=24) {
                price=250+50;
                printf("%d",price);
            }
            else {
                printf("250");
            }
            break;
        default:
    }
    return 0;
}