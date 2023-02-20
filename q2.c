/*Q2.Write a program to input two float no. and perform addition*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    float a, b, c;
    printf("Input two float number:\n");
    scanf("%f%f",&a,&b);
    c=a+b;
    printf("sum=%f\n",c);
    return 0;
}
