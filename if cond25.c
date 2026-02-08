#include<stdio.h>
int main() {
    printf("1.Addition(+)");
    printf("\n2.Subtraction(-)");
    printf("\n3.Multiplication(*)");
    printf("\n4.Division(/)\n");

    int choice;
    int a,b;
    printf("Enter the choice\n");
    scanf("%d",&choice);
    printf("Enter the first number and the second number\n");
    scanf("%d %d",&a,&b);

    switch (choice) {
        case 1:
            printf("Sum=%d",a+b);
            break;
        case 2:
            printf("Difference=%d",a-b);
            break;
        case 3:
            printf("Product=%d",a*b);
            break;
        case 4:
            printf("Division=%d",a/b);
            break;
        default :
            printf("Invalid choice, Enter the correct choice");
    }
    return 0;
}