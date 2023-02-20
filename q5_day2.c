/*Write a program to input two number and perform swapping*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a, b,c;
    printf("Enter two number: \n");
    printf("a= ");
    scanf("%d",&a);
    printf("b= ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("Swapped number is: a=%d\t", a);
    printf( "b=%d\t", b);

    return 0;
}
