#include<stdio.h>
int main() {
    int N;
    printf("Enter the N\n");
    scanf("%d",&N);
    int target;
    scanf("%d",&target);
    int arr[N];
    for (int i=0;i<N;i++) {
        scanf("%d",&arr[i]);
    }
    int count=0;
    for (int j=0;j<N;j++) {
        if (arr[j]==target) {
            count++;
        }
    }
    printf("Frequency count :%d",count);
    return 0;
}