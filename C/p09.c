//9. Two numbers are input through the keyboard into two locations C and D. Write a program to interchange the contents of C and D.
#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Before interchanging: num1 = %d, num2 = %d\n", num1, num2);

    num1 = num1 + num2; 
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After interchanging: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}