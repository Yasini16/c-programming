#include<stdio.h>
int main() {
    int accountType;
    int balance;
    int withdrawAmount;
    printf("Enter the accountType\n");
    scanf("%d",&accountType);
    printf("Enter the balance\n");
    scanf("%d",&withdrawAmount);
    printf("Enter the WithdrawAmount\n");
    scanf("%d",&balance);

    switch(accountType) {
        case 1:
            if (withdrawAmount>=balance) {
                printf("Transaction Successfull");
            }
            else {
                printf("Can't Withdraw the Amount,check the balance");
            }
            break;
        case 2:
            if (withdrawAmount<=5000) {
                printf("Transaction Successfull");
            }
            else {
                printf("Limit exceeded");
            }
            break;
    }
    return 0;
}