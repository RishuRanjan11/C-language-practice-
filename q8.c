/*Q8.Write a program to calculate the area of circle*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int r;
    float area;
    printf("Enter the radius of cirlce:\n");
    scanf("%d", &r);
    area= 3.14*r*r;
    printf("area= %f",area);
    return 0;
}
