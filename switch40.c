#include<stdio.h>
int main() {
    int warrantyCategory;
    int years;
    scanf("%d",&warrantyCategory);

    switch (warrantyCategory) {
        case 1:
            years==0 && years==1;
            printf("Under Warranty");
            break;
        case 2:
            years==2;
            printf("Limited Warranty");
            break;
        case 3:
            years>2;
            printf("Out of Warranty");
            break;
        default:
    }
    return 0;
}