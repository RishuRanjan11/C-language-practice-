/*Write a program to get the Sequence of 1 4 9 16 ......n*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n;
    printf("Enter a number: \n");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1)
    printf("%d ",i*i);    
}
