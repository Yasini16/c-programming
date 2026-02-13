#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int highest;
    int count=0;
    for (int i=1;i<=N;i++) {
        int price;
        scanf("%d",&price);
        if (price>highest) {
            highest=price;
        }
        if (price>100) {
            count++;
        }
    }
    printf("Highest price: %d\n",highest);
    printf("High Price Days: %d",count);
    return 0;
}