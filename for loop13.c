#include<stdio.h>
int main() {
    int M;
    scanf("%d",&M);
    int N;
    scanf("%d",&N);
    int sum=0;
    for (int i=1;i<=N;i++) {
        if (i%M==0) {
            sum=sum+i;
        }
    }
    printf("%d",sum);
    return 0;
}