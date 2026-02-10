#include<stdio.h>
int main() {
    int delayDays;
    int Fine;
    printf("Enter the delayDays\n");
    scanf("%d",&delayDays);
    if (delayDays<=5) {
        Fine=delayDays*50;
        printf("%d",Fine);
    }
    else if (delayDays<=10) {
        Fine=delayDays*100;
        printf("%d",Fine);
    }
    else if (delayDays>10) {
        Fine=delayDays*200;
        printf("%d",Fine);
    }
}