#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int i=1;
    int total=0;
    int count=0;
    while(i<=N) {
        int delay;
        scanf("%d",&delay);
        total=total+delay;
        if (delay>2) {
            count++;
        }
        i++;
    }
    printf("Total Delay:%d\n",total);
    printf("Delayed Days:%d",count);
    return 0;
}