#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++) {
        sum+=arr[i];
    }
    int count=0;
    int avg=sum/n;
    for (int k=0;k<n;k++) {
        if (arr[k]>avg) {
            count++;
        }
    }
    printf("Count: %d\n",count);
    return 0;
}