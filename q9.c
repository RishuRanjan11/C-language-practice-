/*Write a program to input two number and calculate power*/
#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int x, y, p;
    printf("Enter a number:\n");
    scanf("%d",&x);
    printf("Enter a power to be claculated:\n");
    scanf("%d",&y);
    p=pow(x,y);

    printf("Result is: %d",p);
    return 0;
}
