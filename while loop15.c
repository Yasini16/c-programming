#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int total=0;
    int count=0;
    int i=1;
    while(i<=N) {
        int overtime;
        scanf("%d",&overtime);
        total+=overtime;
        if (overtime>4) {
            count++;
        }
        i++;
    }
    printf("Total Overtime Hours: %d\n",total);
    printf("Burnout Days: %d",count);
    return 0;
}