#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int total=0;
    for (int i=1;i<=N;i++) {
        int withdrawalAmt;
        scanf("%d",&withdrawalAmt);
        total=total+withdrawalAmt;
    }
    if (total>10000) {
        printf("limit exceeded");
    }
    else {
        printf("Appreoved");
    }
    return 0;
}