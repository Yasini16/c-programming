#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int i=1;
    int count=0;
    int longest=0;
    int streak=0;
    while (i<=N) {
        int EMI;
        scanf("%d",&EMI);
        if (EMI==0) {
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
    printf("Longest Default Streak:%d",longest);
    return 0;
}