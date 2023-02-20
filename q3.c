/*Q3. Write a program to input two number and perform all arithimatic operations.*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    printf("Enter first number:\n");
    scanf("%d",&a);
    printf("Enter second number:\n");
    scanf("%d",&b);
    printf("Addition=%d\n", a+b);
    printf("Substraction=%d\n", a-b);
    printf("Multiplication=%d\n", a*b);
    printf("Division=%d\n", a/b);
    printf("Modulus=%d\n", a%b);
    return 0;
}
