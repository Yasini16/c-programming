#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int fac=1;
    for (int i=1;i<=N;i++) {
        fac*=i;
    }
    printf("%d ",fac);
    return 0;
}