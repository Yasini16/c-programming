#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    for (int i=2;i<=N;i+=2) {
        printf("%d ",i);
    }
    return 0;
}

***************************************************

#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    for (int i=1;i<=N;i++) {
        if (i%2==0) {
            printf("%d ",i);
        }
    }
    return 0;
}

****************************************************

#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    for (int i=1;i<=N;i++) {
        if (i%2!=1) {
            printf("%d ",i);
        }
    }
    return 0;
}