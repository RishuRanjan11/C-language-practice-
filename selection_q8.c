/*Write a program to input marks of threesubject. Calculate percentage and calculate grade a/c to following condition.
p>=90 - A
p>=80 - B
p>=70 - C                   Total marks = 300.
p>=60 - D
p>=50 - E
p>=40 - F*/

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int  phy, chem, maths;
    float S, P;
    printf("Enter the marks of three subject: \n");
    printf("1.Physics: \n");
    scanf("%d",&phy);
    printf("2.Maths: \n");
    scanf("%d",&maths);
    printf("3.Chemistry: \n");
    scanf("%d",&chem);
    S=phy+chem+maths;
    P=S*100/300;
    printf("percentage: %f\n", P);
    if (P>=90)
        {
        printf("Your Grade is 'A'\n" );
        }
        else if (P>=80)
        {
            printf("Your Grade is 'B'");
        }
        else if (P>=70)
        {
            printf("Your Grade is 'C'");
        }
        else if (P>=60)
        {
            printf("Your Grade is 'D'");
        }
        else if (P>=50)
        {
            printf("Your Grade is 'E'");
        }
        else if (P>=40)
        {
            printf("Your Grade is 'F'");
        }
        else 
            printf("You are fail.");
    
    

    return 0;
}
