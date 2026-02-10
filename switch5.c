#include<stdio.h>
int main() {
    int planType;
    int paymentMode;
    int pay;
    printf("Enter the planType\n");
    scanf("%d",&planType);
    printf("Enter the paymentMode\n");
    scanf("%d",&paymentMode);

    switch (planType) {
        case 1:
            if (paymentMode==11 || paymentMode==12) {
                pay=199-20;
                printf("Pay Rs.%d",pay);
            }
            else if (paymentMode==13) {
                printf("Pay Rs. 199");
            }
            printf("Pay %d",pay);
            break;
        case 2:
            if (paymentMode==11 || paymentMode==12 ) {
                pay=399-20;
                printf("Pay Rs.%d",pay);
            }
            else if (paymentMode==13) {
                printf("pay Rs. 399");
            }
            break;
        default:
    }
    return 0;
}