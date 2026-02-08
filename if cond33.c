#include <stdio.h>
int main () {
    int a;
    scanf("%d",&a);
    if (a>=1 && a<=5) {
        printf("Weekday");
    }
    else if (a==6||a==7) {
        printf("Weekend");
    }
    else {
        printf("Invalid");
    }
    return 0;
}