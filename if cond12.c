#include<stdio.h>
int main() {
    int a=82;
    if (a>=91 && a<=100) {
        printf("Grade A");
    }
    else if (a>=81 && a<=90) {
        printf("Grade B");
    }
    else if (a>=70 && a<=80) {
        printf("Grade C");
    }
    else if (a>=60 && a<=69) {
        printf("Grade D");
    }else {
        printf("Fail");
    }
    return 0;
}