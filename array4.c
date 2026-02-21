#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    int left=0;
    int right=n-1;
    while (left<right) {
        int temp =arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
        left++;
        right--;
    }
    printf("The elements in the array: );
    return 0;
}