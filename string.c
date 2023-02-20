#include <stdio.h>
int main()
{
    char str[5][20];
    int i, j;
    for (i = 0; i < 5; i = i + 1)
        scanf("%s", &str[i]);

    for (i = 0; i < 5; i = i + 1)
    {

        j = 0;
        while (str[i][j] != '\0');
        {
            printf("%c ", str[i][j]);
            j = j + 1;
        }
        printf("\n");
    }

    return 0;
}