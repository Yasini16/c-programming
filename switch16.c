#include<stdio.h>
int main() {
    int flightClass;
    int weight;
    int charges,total;
    printf("Enter the flightClass\n");
    scanf("%d",&flightClass);
    printf("Enter the extra baggage weight\n");
    scanf("%d",&weight);

    switch (flightClass) {
        case 1:
            charges=weight*300;
            printf("%d",charges);
            break;
        case 2:
            if (weight<=3) {
                printf("Free");
            }
            else {
                charges=300;
                total=(weight-3)*charges;
                printf("%d",total);
                break;
            }
       default:
    }
    return 0;
}