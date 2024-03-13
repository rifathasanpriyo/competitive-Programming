#include <stdio.h>
int main()
{
    int i, j, n2, n1, count = 0;
    scanf("%d", &n1);
    char str1[n1][100]; // Assuming maximum string length is 100
    scanf("%d", &n2);
    char str2[n2][100];

    for (i = 0; i < n1; i++)
    {
        scanf("%s", str1[i]);
    }

    for (j = 0; j < n2; j++)
    {
        scanf("%s", str2[j]);
    }

    for (i = 0, j = 0; i < n1 && j < n2; i++, j++)
    {
        if (strcmp(str1[i], str2[j]) == 0)
        {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}
