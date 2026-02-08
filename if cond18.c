#include<stdio.h>
int main() {
    int a;
    int bill;
    scanf("%d",&a);
    if (a<=50) {
        bill=50*3;
    } else if (a<=100) {
        bill=(50*3)+(a-50)*5;
    }else {
        bill=(50*3)+(50*5)+(a-100)*10;
    }
    printf("%d Bill amount:",bill);
    return 0;
}