//7. If lengths of three sides of a triangle are input through the keyboard, write a program to find the area of the triangle.

#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,s;
    int area;
    printf("Enter length of side A : ");
    scanf("%d", &a);

    printf("Enter length of side B : ");
    scanf("%d", &b);

    printf("Enter length of side C : ");
    scanf("%d", &c);

    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("area of triangle is : %d " ,area);
    return 0;

}