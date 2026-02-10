#include<stdio.h>
int main() {
    int type,amt;
    scanf("%d %d",&type,&amt);
    switch(type) {
        case 1:
            amt=amt-amt*5/100;
            printf("Rs.%d",amt);
            break;
        case 2:
            amt=amt-amt*15/100;
            printf("Rs.%d",amt);
            break;
        default:
            printf("not valid");
            break;
    }
}