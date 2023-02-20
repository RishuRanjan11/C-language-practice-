/*Write a program to input to input any number and calculate it's square root*/
#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int a;
    float b;
    printf("Enter any number:\n");
    scanf("%d",&a);
    b=sqrt(a);
    printf("Square root of number is: %f\n",b);
    return 0;
}
