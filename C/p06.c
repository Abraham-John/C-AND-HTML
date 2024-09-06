//6. Write a program to calculate the total cost of the vehicle by adding basic cost with (i) excise duty (15%) (ii) sales tax (10%) (c) octroi (5%) and (d) road tax (1%). Input the basic cost.

#include <stdio.h>
int main()
{
    int a , excise_duty, sales_tax, octroi, road_tax;
    float total;

    printf("Enter basic cost : ");
    scanf("%d", &a);

    excise_duty =  (a * 15) / 100;
    sales_tax = (a * 10) / 100 ;
    octroi = (a * 5) / 100;
    road_tax = (a * 1) / 100;

    total = a + excise_duty + sales_tax + octroi + road_tax;

    printf("Total cost of the vehicle is: %f", total);
    return 0;




}