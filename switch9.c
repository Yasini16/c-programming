#include<stdio.h>
int main() {
    int roomType;
    char season;
    printf("Enter the roomType\n");
    scanf("%d",&roomType);
    printf("Enter the season\n");
    scanf(" %c",&season);

    switch (roomType) {
        case 1:
            if (season=='A') {
                printf("2500");
            }
            else if (season=='B') {
                printf(" 2000");
            }
            else {
                printf("Invalid");
            }
            break;
        case 2:
            if (season=='C') {
                printf("4000");
            }
            else if (season=='D') {
                printf("3000");
            }
            else {
                printf("Invalid");
            }
            break;
    }
    return 0;
}