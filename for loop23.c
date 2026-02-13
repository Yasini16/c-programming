#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int total=0;
    int count=0;
    for (int i=1;i<=N;i++) {
        int dailyLoss;
        scanf("%d",&dailyLoss);
        total=total+dailyLoss;
        if (dailyLoss>100) {
            count++;
        }
    }
    printf("Total Loss: %d\n",total);
    printf("High Loss Days: %d",count);
    return 0;
}