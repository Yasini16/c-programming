#include<stdio.h>
int main() {
    int doctortype;
    scanf("%d",&doctortype);

    switch (doctortype) {
        case 1:
            printf("Consulation Fee 500");
            break;
        case 2:
            printf("Consulation Fee 1200");
            break;
        default:
    }
    return 0;
}