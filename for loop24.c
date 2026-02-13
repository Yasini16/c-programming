#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int total=0;
    int count=0;
    int avg;
    for (int i=1;i<=N;i++) {
        int score;
        scanf("%d",&score);
        total=total+score;
        avg=total/N;
        if (score<40) {
            count++;
        }
    }
    printf("Average Score: %d\n",avg);
    printf("Failed Subjects: %d",count);
    return 0;
}