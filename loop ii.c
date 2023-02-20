/*Write a program to input any number and print factorial of that number*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i, n, f=1;
    printf("Enter any number: \n");
    scanf("%d",&n);
    i=1;
    while (i<=n)
    {
        f=f*i;
        i=i+1;
    }
    printf("%d",f);
    
    return 0;
}
