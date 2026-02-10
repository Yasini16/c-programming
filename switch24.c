#include<stdio.h>
int main() {
    int callType;
    int minutes;
    int callCharge;
    printf("Enter the callType\n");
    scanf("%d",&callType);
    printf("Enter the minutes\n");
    scanf("%d",&minutes);

    switch (callType) {
        case 1:
            callCharge=minutes*1;
            printf("%d",callCharge);
            break;
        case 2:
            callCharge=minutes*3;
            printf("%d",callCharge);
            break;
        case 3:
            callCharge=minutes*10;
            printf("%d",callCharge);
            break;
        default:
    }
    return 0;
}