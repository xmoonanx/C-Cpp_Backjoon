#include <stdio.h>
#define size 246913

int main()
{
    int n, i, j, cnt = 0;
    int num[size] = {0};

    num[0] = 1, num[1] = 1;
    for (i = 2; i <= size; i++)
    {
        if (num[i] == 1)
        {
            continue;
        }
        else
        {

            for (j = 2; i * j <= size; j++)
            {
                num[i * j] = 1;
            }
        }
    }
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
            break;

        for (i = n + 1; i <= 2 * n; i++)
        {
            if (num[i] == 0)
            {
                cnt++;
            }
        }
        printf("%d\n", cnt);
        cnt = 0;
    }
}