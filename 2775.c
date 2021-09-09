#include <stdio.h>

int main()
{
    int T, k, n;
    scanf("%d", &T);
    int plp[15][15] = {0};

    for (int i = 0; i < 15; i++)
    {
        plp[0][i] = i;
    }
    for (int i = 1; i < 15; i++)
    {
        for (int j = 1; j < 15; j++)
        {
            plp[i][j] = plp[i - 1][j] + plp[i][j - 1];
        }
    }

    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &k, &n);
        printf("%d\n", plp[k][n]);
    }
}