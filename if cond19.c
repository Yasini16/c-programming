#include<stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if (ch>=48 && ch<=55) {
        printf("Digit");
    }else {
        printf("Not Digit ");
    }
    return 0;
}