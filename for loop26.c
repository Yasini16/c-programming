#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int total=0;
    int count=0;
    for (int i=1;i<=N;i++) {
        int patients;
        scanf("%d",&patients);
        total=total+patients;
        if (patients>100) {
            count++;
        }
    }
    printf("Total Patients: %d\n",total);
    printf("Overcrowded Days: %d",count);
    return 0;
}