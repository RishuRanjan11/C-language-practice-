#include<stdio.h>
int main()
{
    int arr[5][5],i,j,big;
    printf("Enter 25 data: \n");
    for(i=0;i<5;i=i+1)
    {
        for(j=0;j<5;j=j+1){
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<5;i=i+1)
    {
        j=0;
        big=arr[i][j];
        while(j<5)
        {
            if(arr[i][j]>big)
            {
                big=arr[i][j];
            }
            j=j+1;
        }
        printf("big=%d \n",big);
    }
    return 0;
}