/*Write a program to print factorial of 1 to 7*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j, f = 1;
    i = 1;

    for(i=1;i<=7;i=i+1){
    f=f*i;
    printf("factorial of %d is: %d\n",i,f);
    }

    return 0;
}
