#include<stdio.h>
int main() {
    int numbers=1;
    for (int i=1;i<=5;i++) {
        for (int j=1;j<=i;j++) {
            printf("%d ",numbers);
            numbers++;
        }
        printf("\n");
    }
    return 0;
}