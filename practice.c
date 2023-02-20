#include <stdio.h>
void takenumber()
{
    int n;
    printf("Enter any number: \n");
    scanf("%d", &n);
}
int main()
{
    int i, j, n;
    takenumber();
    for (i = 1; i <= n; i = i + 1)
    {
        for (j = 1; j <= n; j = j + 1)
        {
            if (j <= n - i)
            {
                printf(" ");
            }
            else {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}