
#include<stdio.h>
int main() {
    int totalData;
    int N;
    scanf("%d%d",&totalData,&N);
    int i=1;
    int count=0;
    while (i<=N) {
        int dailyData;
        scanf("%d",&dailyData);
        totalData-=dailyData;
        if (totalData>=0) {
            count++;
        }
        else {
            totalData=0;
            break;
        }
        i++;
    }
    printf("Days Used: %d\n",count);
    printf("Remaining Data: %dGB",totalData);
    return 0;
}