/*Write a program to get the Sequence of 50 49 48 47 46 45......0*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i;
    for(i=50;i>=0;i-=1)
    printf("%d ",i);
    return 0;
}
