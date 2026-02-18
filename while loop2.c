#include<stdio.h>
int main() {
    int N;
    int initialBalance;
    scanf("%d%d",&N,&initialBalance);
    int i=1;
    int count=0;
    while (i<=N) {
        int withdrawal;
        scanf("%d",&withdrawal);
        int previousBalance=initialBalance;
        initialBalance+=withdrawal;
        if (previousBalance>=2000 && initialBalance<2000) {
            count++;
        }
        i++;
    }
    printf("Final Balance: %d\n",initialBalance);
    printf("Low Balance: %d\n",count);
    return  0;
}
}