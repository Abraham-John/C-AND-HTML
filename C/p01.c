//1. Write a program to print logic 1 if input character is capital otherwise 0.

#include <stdio.h>

int main() {
    char a;

    printf("Enter a word: ");
    scanf("%c", &a);

    if (a >= 'A' && a <= 'Z') {
        printf("Result = 1\n");
    } else {
        printf("Result = 0\n");
    }
    return 0;
}
