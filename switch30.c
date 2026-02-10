#include<stdio.h>
int main() {
    int hours;
    scanf("%d",&hours);
    if (hours<=1) {
        printf("Short Interruption");
    }
    else if (hours<=4) {
        printf("Medium Interruption");
    }
    else if (hours>4) {
        printf("Long Interruption");
    }
    else {
        printf("Invalid Interruption");
    }
    return 0;
}