/*Write a program to input four number and find the smallest one*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c,d;
    printf(" Enter any four number \n");
    scanf("%d %d %d %d", &a,&b,&c,&d);
    if (a<b && a<c && a<d)
    printf("a is the smallest number");
    else if (b<c && b<d)
    printf("b is the smallest number \n");
    else if(c<d)
    printf("c is the smallest number \n");
    else printf("d is the smallest number \n");
    return 0;
}
