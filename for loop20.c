#include<stdio.h>
int main() {
    int batteryPercent;
    scanf("%d",&batteryPercent);
    int N;
    scanf("%d",&N);
    int total=batteryPercent;
    for (int i=1;i<=N;i++) {
        int drain;
        scanf("%d",&drain);
        total=total-drain;
    }
    printf("Remaining battery: %d",total);
    return 0;
}