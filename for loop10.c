int main() {
    int N;
    scanf("%d",&N);
    int first=0;
    int second=1;
    if (1<=N) {
        printf("%d",first);
    }
    if (2<=N) {
        printf("%d",second);
    }
    for (int i=2;i<N;i++) {
        int temp=first+second;
        first=second;
        second=temp;
        printf("%d",temp);
    }
    return 0;
}