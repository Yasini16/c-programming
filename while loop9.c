#include<stdio.h>
int main() {
    int fuel;
    int N;
    scanf("%d%d",&fuel,&N);
    int i=1;
    int count=0;
    while (i<=N) {
        int fuelConsumed;
        scanf("%d",&fuelConsumed);
        if (fuel>=fuelConsumed) {
            fuel-=fuelConsumed;
            count++;
        }
        else {
            break;
        }
        i++;
    }
    printf("Completed Trips:%d\n",count);
    printf("Remaining Fuel:%d",fuel);
    return 0;
}