#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int total=0;
    int count=0;
    for (int i=1;i<=N;i++) {
        int rainfall;
        scanf("%d",&rainfall);
        total=total+rainfall;
        if (rainfall>50) {
            count++;
        }
    }
    printf("Total Rainfall: %d\n",total);
    printf("Heavy Rain Days: %d",count);
    return 0;
}