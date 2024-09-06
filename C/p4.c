#include <stdio.h>
int main()
{
    int p,n,r;
    float si;
    printf("Enter principal : ");
    scanf("%d", &p);

    printf("Enter years : ");
    scanf("%d", &n);

    printf("Enter rate : ");
    scanf("%d", &r);

    si = p*n*r / 100;

    printf("Simple Intrest is :%5.2f\n " ,si);
    return 0;

}
