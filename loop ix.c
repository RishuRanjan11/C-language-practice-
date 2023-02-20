/*Write a program to print the sum of following series S=1+2+3+4+5+.......10*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,s;
    for(i=1;i<=10;i=i+1)
    s=s+i;
    printf("Sum=%d",s);
    return 0;
}
