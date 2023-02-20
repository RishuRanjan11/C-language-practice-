/*Write a program to get the Sequence of 1 2 4 7 11 16*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
 int i,n=1;
    for(i=1;i<=6;i++){
    printf("%d ",n);
    n=n+i;
    }
    return 0;
}
