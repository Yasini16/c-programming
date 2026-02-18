#include<stdio.h>
int main() {
    int N;
    int i=1;
    int count=0;
    int longest=0;
    int currentstreak=0;
    scanf("%d",&N);
    while (i<=N) {
        int noise;
        scanf("%d",&noise);
        if (noise>70) {
            count++;
            streak++;
            if (streak>longest) {
                longest=streak;
            }
        }
        else {
            streak=0;
            break;
        }
        i++;
    }
    printf("Noise Violation is: %d\n",count);
    printf("Longest Violation is: %d\n",longest);
    return 0;
}