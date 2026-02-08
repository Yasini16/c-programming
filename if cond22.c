#include<stdio.h>
int main() {
    int day;
    scanf("%d",&day);
    switch(day) {
        case 1:
            printf("Momday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid number, please enter the number between 1 to 7");
    }
    return 0;
}