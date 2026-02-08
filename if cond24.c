#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);

    switch(ch) {
        case 'A':
            printf("Vowel");
            break;
        case 'E':
            printf("Vowel");
            break;
        case 'I':
            printf("Vowel");
            break;
        case 'O':
            printf("Vowel");
            break;
        case 'U':
            printf("Vowel");
            break;
        default:
            printf("invalid character, it is not Vowel");
    }
    return 0;
}