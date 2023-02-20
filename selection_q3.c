/* Write a program to input three number and find biggest one*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("Enter three different number: \n");
    scanf("%d %d %d", &a,&b,&c);
    if(a>b && a>c)
         printf("%d a is the biggest number", a);
    else if(b>c)
    printf("%d b is the biggest number: \n",b);
    else printf("%d c is the biggest number: \n",c);    

    return 0;
}
