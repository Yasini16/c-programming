#include<stdio.h>
int main() {
    int ConnectionType;
    int Units;
    int bill;
    printf("Enter the ConnectionType\n");
    scanf("%d",&ConnectionType);
    printf("Enter the Units\n");
    scanf("%d",&Units);

    switch(ConnectionType) {
        case 1:
            if (Units<=100) {
                bill=Units*3;
            }
            else {
                bill=(100*3)+(Units-100)*5;
            }
            printf("Bill=%d",bill);
            if (Units>100) {
                bill=(bill-80);
                printf("\n Bill=%d",bill);
            }
            break;
        case 2:
            if (Units<=100) {
                bill=Units*7;
            }
            else {
                bill=(100*7)+(Units-100)*10;
            }
            printf("Bill=%d",bill);
            break;
    }
    return 0;
}