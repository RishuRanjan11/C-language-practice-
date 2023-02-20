/*Write a program to input three number and find biggest in it*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c,big;
    printf("Enter three number: \n");
    printf("a= ");
    scanf("%d",&a);
    printf("b= ");
    scanf("%d",&b);
    printf("c= ");
    scanf("%d",&c);
    big=(a>b&&a>c?a:b>c?b:c);
    printf("big= %d\n",big);
    return 0;
}
