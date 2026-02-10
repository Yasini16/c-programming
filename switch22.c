#include<stdio.h>
int main() {
    int connectionType;
    int units;
    int bill;
    printf("Enter the connectionType\n");
    scanf("%d",&connectionType);
    printf("Enter the units\n");
    scanf("%d",&units);

    switch (connectionType) {
        case 1:
            if (units<=30) {
                bill=units*5;
                printf("%d",bill);
            }
            else if (units>30) {
                bill=(30*5)+(units-30)*8;
                printf("%d",bill);
            }
            break;
        case 2:
            bill=units*10;
            printf("%d",bill);
            break;
        default:
    }
    return 0;
}