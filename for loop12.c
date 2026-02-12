#include<stdio.h>
int main() {
    int N,P;
    scanf("%d %d",&N,&P);
    int mul=1;
    for (int i=1;i<=P;i++) {
        mul=mul*N;
    }
    printf("%d",mul);
    return 0;
}