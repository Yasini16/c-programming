#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int rev=0;
    for (;N!=0;N/=10) {
        int rem=N%10;
        rev=rev*10+rem;
    }printf("%d",rev);
    return 0;
}