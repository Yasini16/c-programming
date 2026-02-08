#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a>=499) {
        printf("Free Delivery");
    }
    else {
        printf("Delivery Charges Apply");
    }
    return 0;
}