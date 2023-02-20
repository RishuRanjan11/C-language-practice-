/*Write a program to input a number of four digit and reverse it*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,d,rev;
    printf("Enter a number of four digit: \n");
    scanf("%d",&n);
    d=n%10;
    rev=d;
    n=n/10;
    d=n%10;
    rev=rev*10+d;
    n=n/10;
    d=n%10;
    rev=rev*10+d;
    n=n/10;
    d=n%10;
    rev=rev*10+d;
    printf("%d\n" ,rev);
    return 0;
}
