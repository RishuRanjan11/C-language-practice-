/*Write a program to Input 10 number in an array and print all data in reverse order*/
#include<stdio.h>
int main()
{
    int arr[10],i;
    printf("Enter 10 data:  \n");
    for (i = 0; i < 10; i=i+1)  
    {
        scanf("%d",&arr[i]);
    }
    for(i=9;i>=0;i=i-1)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}