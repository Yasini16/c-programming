#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int total=0;
    for (int i=1;i<=N;i++) {
        int units;
        scanf("%d",&units);
        total=total+units;
    }
    printf("Total units : %d",total);
    return 0;
}