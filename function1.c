#include<stdio.h>
int prime();
int prime()
{
    int n,i;
    printf("Enter any number: \n");
    scanf("%d",&n);
    for (int i = 2; i <=n/2; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
        
    }
    return 1;
    
}
int main()
{
    int r;
   r = prime();
    if(r==1)
    {
        printf("Number is  prime.\n");
    }
    else printf("Number is not prime.\n");
    
    return 0;
}