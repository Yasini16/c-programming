#include<stdio.h>
int main() {
    int N,pro;
    scanf("%d",&N);
    for (int i=1;i<=10;i++) {
        pro=i*N;
        printf("%d ",pro);
    }
    return 0;
}