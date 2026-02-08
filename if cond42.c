#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a<20) {
        printf("Low Battery");
    }
    else {
        printf("Battery OK");
    }
    return 0;
}