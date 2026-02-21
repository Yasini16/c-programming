#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int increasing=1;
    int arr[N];
    for (int i=0;i<N;i++) {
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<N-1;i++) {
        if (arr[i]>arr[i+1]) {
            increasing=0;
            break;
        }
    }
    if (increasing) {
        printf("Yes");
    }
    else {
        printf("No");
    }
    return 0;
}