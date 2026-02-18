#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int i=1;
    int max;
    int count=0;
    while (i<=N) {
        int power;
        scanf("%d",&power);
        if (power>max) {
            max=power;
        }
        if (power>5) {
            count++;
        }
        i++;
    }
    printf("Max Usage:%d\n",max);
    printf("Surge Hours:%d",count);
    return 0;
}