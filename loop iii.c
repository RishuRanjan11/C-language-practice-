/*Write a program to input a number and print all factor of that number*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i, n;
    printf("Enter any number: \n");
    scanf("%d",n);
    
    for(i=1;i<=n;i=i+1)
    {
        if(n%i==0)
        printf("%d, ",i);
    }
    return 0;
}
