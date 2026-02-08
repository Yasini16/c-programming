#include<stdio.h>
int main() {
    printf("Enter the operation you wanna do()");
    printf("\n1.Addition(+)");
    printf("\n2.Subtraction(-)");
    printf("\n3.Multiplication(*)");
    printf("\n4.Division(*)");

    char operation;
    scanf("%c",&operation);

    int a,b;
    printf("Enter the first number and the second number\n");
    scanf("%d%d",&a,&b);

    switch(operation) {
        case '+':
            printf("%d + %d=%d",a,b,a+b);
            break;
        case '-':
            printf("%d - %d=%d",a,b,a-b);
            break;
        case '*':
            printf("%d * %d=%d",a,b,a*b);
            break;
        case '/':
            printf("%d / %d=%d",a,b,a/b);
            break;
        default:
    }
    return 0;
}