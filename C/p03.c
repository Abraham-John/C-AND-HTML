//3. Write a program to display 1 if inputted number is either 1 or 100 otherwise 0. Use logical OR (||) operator. 


#include <stdio.h>


int main() {
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    if (a == 1 || a == 100) {
        printf("1\n");
    } 
    else {
        printf("0\n");
    }
    return 0;
}
