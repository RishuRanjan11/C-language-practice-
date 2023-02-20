/*Write a program to get the Sequence of AZ BY CX DW.....ZA*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
 char i;
    for(i=65;i<=90;i+=1)
    {
    printf("%c%c ",i, 155-i);
    }
    return 0;
}
