#include<stdio.h>
int main() {
    int courseType;
    scanf("%d",&courseType);

    switch (courseType) {
        case 1:
            printf("Certificate fee 0");
            break;
        case 2:
            printf("Certificate fee 500");
            break;
        default:
    }
    return 0;
}