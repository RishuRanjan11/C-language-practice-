/*Write a program to input a number and determine wether it is even or odd*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter any number: \n");
    scanf("%d", &n);
    if(n%2==0)
    printf("Given number is even");
    
    else
         printf("Given number is odd");
    

    return 0;
}
