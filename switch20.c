#include<stdio.h>
int main() {
    int userRole;
    int loginTime;
    printf("Enter the userRole\n");
    scanf("%d",&userRole);
    printf("Enter the loginTime\n");
    scanf("%d",&loginTime);

    switch (userRole) {
        case 1:
            if (loginTime>=1 && loginTime<=24) {
                printf("Full access anytime");
            }
            break;
        case 2:
            if (loginTime>=9 && loginTime<=18) {
                printf("Limited Access");
            }
            else {
                printf("Access Denied");
            }
            break;
        default:
    }
    return 0;
}