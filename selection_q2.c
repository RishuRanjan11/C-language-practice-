/*Write a program to input a number and determine wether it is even or odd without using mod operator*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,x;
    printf("Enter any number: ");
    scanf("%d",&n);
    x=n/2;
    if(n==x*2)
        printf("Given number is even");
    else
        printf("Given number is odd");
    return 0;
}
