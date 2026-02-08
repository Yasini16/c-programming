#include<stdio.h>
int main() {
    char ch= 'a';
    if (ch == 'a'|| ch == 'A'|| ch == 'E'|| ch == 'e' || ch == 'I'|| ch == 'i' || ch == 'O'|| ch == 'o' || ch == 'U'|| ch == 'u'){
        printf("vowel");
    } else {
        printf("not a vowel");
    }
    return 0;
}