/*Write a program to input any multidigit number annd print factorial of each digit*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, d, i, j, f = 1;
    printf("Enter any multidigit number: \n");
    scanf("%d", &n);
    for (i = 1; n > 0; i = i + 1)
    {
        d=n%10;
        for(j=1;j<d;j=j+1)
        f=f*j;
        printf("%d ",f);
        n=n/10;
    }

    return 0;
}
