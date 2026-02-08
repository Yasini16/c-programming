#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a==1) {
        printf("Admin");
    }
    else if (a==2) {
        printf("User");
    }
    else if (a==3) {
        printf("Guest");
    }
    else {
        printf("None");
    }
    return 0;
}