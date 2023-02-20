#include<stdio.h>
int main()
{
    int arr[5][5],i,j;
    printf("Enter 25 data: \n");
    for(i=0;i<5;i=i+1)
    {
        for(j=0;j<5;j=j+1){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<5;i=i+1)
    {
        for(j=0;j<5;j=j+1){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}