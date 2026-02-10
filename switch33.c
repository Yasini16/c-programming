#include<stdio.h>
int main() {
    int bookType;
    int daysLate;
    int fee;
    printf("Enter the bookType\n");
    scanf("%d",&bookType);
    printf("Enter the daysLate\n");
    scanf("%d",&daysLate);

    switch (bookType) {
        case 1:
            fee=daysLate*2;
            printf("Late Fee %d",fee);
            break;
        case 2:
            fee=daysLate*5;
            printf("Late Fee %d",fee);
            break;
        default:
    }
    return 0;
}