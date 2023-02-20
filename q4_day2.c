/*Write a program to input a number of four digit and print each digit by adding 1 in it*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,d,s;
    printf("Enter a number of four digit: \n");
    scanf("%d",&n);
    d=n%10;
    s=d+1;
    printf("%d\t",s);
    n=n/10;
    d=n%10;
    s=d+1;
    printf("%d\t",s);
    n=n/10;
    d=n%10;
    s=d+1;
    printf("%d\t",s);
    n=n/10;
    s=n+1;
    printf("%d\t",s);
    return 0;
}

