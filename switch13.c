#include<stdio.h>
int main() {
    int loanType;
    int creditScore;
    printf("Enter the loanType\n");
    scanf("%d",&loanType);
    printf("Enter the creditScore\n");
    scanf("%d",&creditScore);

    switch (loanType) {
        case 1:
            if (creditScore>=700) {
                printf("Approved");
            }
            else if (creditScore>=650 && creditScore<=699) {
                printf("Manual Review");
            }
            else {
                printf("Invalid");
            }
            break;
        case 2:
            if (creditScore>=700) {
                printf("Approved");
            }
            else {
                printf("Rejected");
            }
            break;
        default:
    }
    return 0;
}