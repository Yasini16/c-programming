#include<stdio.h>
int main() {
    int code;
    int experience;
    int Base_salary;
    int Salary;
    printf("Enter the code\n");
    scanf("%d",&code);
    printf("Enter the experience\n");
    scanf("%d",&experience);

    switch (code) {
        case 1:
            Base_salary=50000;
            if (experience>=3) {
                Salary= (experience*5000)+Base_salary;
                printf("%d",Salary);
            }
            break;
        case 2:
            Base_salary=35000;
            if (experience>=3) {
                Salary=(experience*5000)+Base_salary;
                printf("%d",Salary);
            }
            break;
        default:
    }
    return 0;
}