/*Write a program to input unit of electricity meter and calculate bill a/c to following conditions.
u<50; 4.50/-
u>=50,u<=100; 5.50/-(1st 50 -  4.50/-)
u>100, u<=150; 6.50/- (1st 50 -  4.50/-, 2nd 50 -  5.50/-)
u>150  10.00/-
Meter rent - 100/-
Electricity charge - 450/-
Govt. subsidy - 10%
Bill=? */

#include<stdio.h>
int main(int argc, char const *argv[])
{
    float unit,bill,govt;
    printf("Enter the unit of electricity: \n");
    scanf("%f", &unit);
    if(unit<=50)
        bill= unit*4.50;
    else if(unit>=50 && unit<=100)
        bill=50*4.50+(unit-50)*5.50;
    else if(unit>100 && unit<=150)
        bill=50*4.50+(50*5.50)+(unit-100)*6.50;
    else 
        bill=unit*10.00;
        govt=10/100*bill;
        bill=unit-govt;
        bill=bill+100+450;
        printf("Bill amount: %f\n",bill);
    return 0;
}
