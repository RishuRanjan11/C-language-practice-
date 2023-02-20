/*Write a program to enter a number of three digit and determine wether it is plandrom or not*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,x,d,rev=0;
    printf("Enter a number of three digit: \n");
    scanf("%d",&n);
    x=n;
    d=n%10;
    n=n/10;
    rev=rev*10+d;
    d=n%10;
    n=n/10;
    rev=rev*10+d;
    rev=rev*10+n;
    if(x==rev)
    printf("Given number is plandrom");
    else printf("Given number is not plandrom");
    return 0;
}
