#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int total=0;
    int count=0;
    for (int i=1;i<=N;i++) {
        int D;
        scanf("%d",&D);
        total=total+D;
        if (D>1000) {
            count++;
        }
    }
    printf("%d\n",total);
    printf("%d",count);
    return 0;
}