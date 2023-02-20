/*Q4.Write a program to input any character and print it's ascii value*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    char ch;
    printf("Enter any character:\n");
    scanf("%c",&ch);
    printf("Ascii value of given character is: %d\n",ch);
    return 0;
}
