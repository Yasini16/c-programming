#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int count=0;
    for (;N!=0;N/=10) {
        if (N%2==0) {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}