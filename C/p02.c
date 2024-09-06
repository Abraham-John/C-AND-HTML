//Write a program to display 1 if inputted number is between 1 and 100 otherwise 0. Use logical AND (&&) operator. 

#include <stdio.h>


int main() {
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    if (a >= 1 && a <= 100) {
        printf("1\n");
    } 
    else {
        printf("0\n");
    }
    return 0;
}
