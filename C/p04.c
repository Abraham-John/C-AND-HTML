//4. Write a program to enter two numbers. Make a comparison between them with a conditional operator. If the first number is greater than the second perform DIVISON otherwise MULTIPLICATION operation. 

#include <stdio.h>
int main()
{
    int a,b;

    printf("Enter 1st numbers:");
    scanf("%d" , &a);

    printf("Enter 2nd numbers:");
    scanf("%d" , &b);

    (a>b) ? printf("Division of %d and %d is %d\n",a,b,a/b) : 
        printf("Multiplication of %d and %d is %d\n",a,b,a*b);
          
}