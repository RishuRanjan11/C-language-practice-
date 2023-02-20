/*Q7. Write a program to input 5 number and print sum of all.*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,s=0;
    
printf("Enter any five number: \n");
scanf("%d",&a);
s=s+a;
scanf("%d",&a);
s=s+a;
scanf("%d",&a);
s=s+a;
scanf("%d",&a);
s=s+a;
scanf("%d",&a);
s=s+a;
printf("Sum of all given number is: %d\n",s);
    return 0;
}
