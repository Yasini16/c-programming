#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int total=0;
    int count=0;
    for (int i=1;i<=N;i++) {
        int errors;
        scanf("%d",&errors);
        total+=errors;
        if (errors>50) {
            count++;
        }
    }
    printf("Total Error: %d\n",total);
    printf("Critical Hours: %d",count);
    return 0;
}