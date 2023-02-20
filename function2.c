#include<stdio.h>
int biggest(int a, int b, int c );
int biggest(int a, int b, int c)
{
    
    if(a>b&&a>c)
    {
        return a;
    }
    else if(b>c)
    {
        return b;
    }
    else return c;

}
int main()
{
    int a,b,c,big;
    printf("Enter any three number: \n");
    scanf("%d%d%d",&a,&b,&c);
    big=biggest(a,b,c);
    if(big==a)
    {
        printf("a is big\n");
    }
    else if(big==b)
    {
        printf("b is big\n");
    }
    else printf("c is big\n");
    return 0;
}