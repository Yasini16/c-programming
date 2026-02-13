#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int total=0;
    for (int i=1;i<=N;i++) {
        int ticket;
        scanf("%d",&ticket);
        total=total+ticket;
    }
    printf("Total Collection: %d",total);
    return 0;
}