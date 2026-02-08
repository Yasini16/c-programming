#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a>90) {
        printf("Overflow Warning");
    }
    else {
        printf("Safe Level");
    }
    return 0;
}