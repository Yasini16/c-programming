#include<stdio.h>
int main() {
    int salary;
    scanf("%d",&salary);
    int absentDays;
    scanf("%d",&absentDays);
    int final;
    for (int i=1;i<=salary;i++) {
        final=salary-(absentDays*100);
    }
    printf("Final Salary: %d",final);
    return 0;
}