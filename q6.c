/*Write a program to inout two float number and print sum of only fraction part*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    float a,b;
    int x,y;
    printf(" Enter any two float number: \n");
    scanf("%f%f",&a,&b);
    x=a;
    y=b;
    printf("Sum of only fraction part is: %f\n",(x-a)+(y-b));
    return 0;
}
