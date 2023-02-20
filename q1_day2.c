/*Write a program to input a number of four digit and print each digit seperately*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,d;
    printf("Enter a number of four digit: \n");
    scanf("%d", &n);
    d=n%10;
    printf("%d\t",d);
    n=n/10;
    d=n%10;
    printf("%d\t",d);
    n=n/10;
    d=n%10;
    printf("%d\t",d);
    n=n/10;
    printf("%d\t",n);
    
    return 0;
}

