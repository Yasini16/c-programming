#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int sum=0;
    for (;N!=0;N/=10) {
        sum=sum+(N%10);
        }
    printf("%d",sum);
    return 0;

}