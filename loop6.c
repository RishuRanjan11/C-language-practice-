/*Write a program to get the Sequence of Aa Bb Cc Dd Ee Ff....Zz*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
 char i;
    for(i=65;i<=90;i+=1)
    printf("%c%c ",i, i+32);
    return 0;
}
