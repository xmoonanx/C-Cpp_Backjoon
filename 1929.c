#include <stdio.h>
#include <math.h>

#define size 1000001

int num[size] = {0};

int main()
{
    int m, n;
    int tmp = 0;

    for (int i = 2; i < size; i++)
    {
        num[i] = i;
    }
    scanf("%d %d", &m, &n);
    tmp = (int)sqrt(n);

    for (int i = 2; i <= tmp; i++)
    {
        if (num[i] == 0)
            continue;
        else
        {
            for (int j = i + 1; j <= n; j++)
            {
                if (num[j] == 0)
                    continue;
                if (num[j] % i == 0)
                {
                    num[j] = 0;
                }
            }
        }
    }
    for (int i = m; i <= n; i++)
    {
        if (num[i] != 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}