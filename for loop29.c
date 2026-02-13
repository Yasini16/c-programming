#include <stdio.h>
int main () {
    int N;
    scanf("%d",&N);
    int total=0;
    int count=0;
    for (int i=1;i<=N;i++) {
        int dailyRevenue;
        scanf("%d",&dailyRevenue);
        total+=dailyRevenue;
        if (dailyRevenue>50000) {
            count++;
        }
    }
    printf("Total Revenue: %d\n",total);
    printf("Target Days: %d",count);
    return 0;
}