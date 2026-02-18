#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int i=1;
    int count=0;
    int longest=0;
    int streak;
    while (i<=N) {
        int status;
        scanf("%d",&status);
        if (status==0) {
            count++;
            streak++;
            if (streak>longest) {
                longest=streak;
            }
        }
        else {
            streak=0;
        }
        i++;
    }
    printf("Longest Failure Streak: %d",longest);
    return 0;
}