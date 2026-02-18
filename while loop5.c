#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int i=1;
    int successfullCount=0;
    int failureCount=0;
    int Status;
    while (i<=N) {
        int orders;
        scanf("%d",&orders);
        if (orders==1) {
            successfullCount++;
        }
        else {
            failureCount++;
        }
        i++;
    }
    printf("Successful Orders: %d\n",successfullCount);
    printf("Cancelled Orders: %d\n",failureCount);

    if (successfullCount<failureCount) {
        printf(Status:"Risk");
    }
    else {
        printf(Status:"Safe");
    }

    return 0;
}