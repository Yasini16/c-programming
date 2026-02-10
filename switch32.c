#include<stdio.h>
int main() {
    int violationType;
    printf("Enter the violationType\n");
    scanf("%d",&violationType);

    switch (violationType) {
        case 1:
            printf("Fine 1000");
            break;
        case 2:
            printf("Fine 1500");
            break;
        case 3:
            printf("Fine 2000");
            break;
        default:
    }
    return 0;
}