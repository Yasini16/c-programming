#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a>=85) {
        printf("Distinction");
    }
    else if (a>35) {
        printf("Pass");
    }
    else {
        printf("Fail");
    }
    return 0;
}