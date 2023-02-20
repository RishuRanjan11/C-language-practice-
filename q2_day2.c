/*Write a program to input a number of four digit and print sum of all digit*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,d,s=0;
    printf("Enter a number of four digit: \n");
    scanf("%d",&n);
    d=n%10;
    s=s+d;
    n=n/10;
    d=n%10;
    s=s+d;
    n=n/10;
    d=n%10;
    s=s+d;
    n=n/10;
    s=s+n;
    printf("Sum all four digit is: %d",s);
    return 0;
}
