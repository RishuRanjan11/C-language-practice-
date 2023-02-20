/*Write a program to input cost price and selling price of an item and determine wether the seller got profit or loss*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int cp,sp;
    printf("Enter the cost price of item: \n");
    scanf("%d",&cp);
    printf("Enter the selling price of item: \n");
    scanf("%d",&sp);
    if(cp>sp)
    printf("The seller got loss.\n");
    else if (sp>cp)
    printf("The seller got profit.\n");
    else
     printf(" no profit no loss.\n");
    return 0;
}
