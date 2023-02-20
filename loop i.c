/*Write a program to input any number and print table of that number*/
#include<stdio.h>
int main(int argc, char const *argv[])
{int i,n;
    printf("Enter any number: \n");
    scanf("%d",&n);
    for(i=1;i<=10;i+=1)
    printf("%d*%d=%d\n",n,i,n*i);
    return 0;
}
