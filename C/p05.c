//5. Write a program to enter a number that should be less than 100 and greater than 9. Display the digits of the number in the reverse order using modular division and division operation. Also, display the sum of digits too.

#include <stdio.h>

int main() {
    int a, reversed = 0, digit, sum = 0;
    printf("Enter a number between 9 and 100: ");
    scanf("%d", &a);

    if (a < 9 || a > 100) {
        printf("Invalid input. Please enter a number between 9 and 100\n");
        return 0;
    }

    while (a > 0) {
        digit = a % 10;
        reversed = reversed * 10 + digit;
        a /= 10;
    }

    printf("Reversed number: %d\n", reversed);

    while (reversed > 0) {
        digit = reversed % 10;
        sum += digit;
        reversed /= 10;
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}