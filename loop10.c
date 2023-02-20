/*Write a program to get the Sequence of 1 11 111 1111 11111*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
 int i;
    for(i=1;i<=11111;i=i*10+1)
    printf("%d ",i);
    return 0;
}
