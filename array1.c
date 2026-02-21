#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int salary[N];
    int largest=salary[0];
    int second=salary[0];
    for (int i=0;i<N;i++) {
        scanf("%d",&salary[i]);
    }
    for (int j=0;j<N;j++) {
        if (salary[j]>largest){
            second=largest;
            largest=salary[j];
        }
        else if (salary[j]<largest){
            if (second==largest || second<salary[j]) {
                second=salary[j];
            }
        }
    }
    printf("%d",second);
    return 0;
}