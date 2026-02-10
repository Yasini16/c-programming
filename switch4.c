#include<stdio.h>
int main() {
    int class;
    int age;
    int fare;
    printf("Enter the class\n");
    scanf("%d",&class);
    printf("Enter the age\n");
    scanf("%d",&age);

    switch (class) {
        case 1:
            if (age>12) {
                fare=300-(300*50/100);
                printf("Fare Rs.%d\n ",fare);
            }
            else if (age>=60){;
                fare=300-(300*33/100);
                printf("Fare Rs.%d\n",fare);
            }
            else {
                printf("Invalid");
            }
            break;
        case 2:
            if (age<12) {
                fare=1000-(1000*50/100);
                printf("Fare Rs.%d\n ",fare);
            }
            else {
                printf("Fare Rs.1000\n");
            }
            break;
        default:
    }
    return 0;
}