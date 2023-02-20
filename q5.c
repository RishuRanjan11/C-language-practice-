/*Write a program to input two float number and print sum of only integer part*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    float n1,n2;
    int x,y,s;
    printf("Enter two float number:\n");
    scanf("%f%f",&n1,&n2);
    x=n1;
    y=n2;
    s=x+y;
    printf("Sum of only integer part is:%d",s);
    return 0;
}
