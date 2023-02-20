/*Write a program to input a number of three digit and determine wether it is armstrong or not */
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,x,d,sum=0;
    printf("Enter a number of three digit: \n");
    scanf("%d",&n);
    x=n;
    d=n%10;
    sum=(d*d*d)+sum;
    n=n/10;
    d=n%10;
    sum=(d*d*d)+sum;
    n=n/10;
    sum=(n*n*n)+sum;
    if(x==sum)
    printf("Given number is armstrong: \n");
    else printf("Given number is not armstrong : \n");
    return 0;
}
