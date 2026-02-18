#include<stdio.h>
int main() {
    int maxWeight;
    int N;
    scanf("%d%d",&maxWeight,&N);
    int i=1;
    int total=0;
    int count=0;
    int overload;
    while (i<=N) {
        int passengerWeight;
        scanf("%d",&passengerWeight);
        total=total+passengerWeight;
        if (total<=maxWeight) {
            count++;
        }
        else {
            overload=1;
            break;
        }
        i++;
    }
    printf("Passengers Allowed: %d\n",count);

    if (overload==1) {
        printf("Overload:Yes");
    }
    else {
        printf("Overload:No");
    }
    return 0;
}