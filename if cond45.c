#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a<=20) {
        printf("Heating Mode");
    }
    else if (a>21 && a<=30) {
        printf("Normal Mode");
    }
    else {
        printf("Cooling Mode");
    }
    return 0;
}