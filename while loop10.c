#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int i=1;
    int activeCount=0;
    int inactiveCount=0;
    int RiskStatus;
    while (i<=N) {
        int week;
        scanf("%d",&week);
        if (week==0) {
            inactiveCount++;
        }
        else {
            activeCount;
        }
        i++;
    }
    printf("Inactive Weeks:%d",inactiveCount);

    if (inactiveCount*2>=N) {
        printf("\nRisk_Status:High");
    }
    else {
        printf("\nRisk_Status:Low");
    }
    return 0;
}