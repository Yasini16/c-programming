#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int total=0;
    int count=0;
    for (int i=1;i<=N;i++) {
        int dailyUsage;
        scanf("%d",&dailyUsage);
        total=total+dailyUsage;
        if (dailyUsage>2) {
            count++;
        }
    }
    printf("Total Data: %d\n",total);
    printf("High Usage Days: %d",count);
    return 0;
}