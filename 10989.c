#include <stdio.h>
#define size 10001
int cnt[size] = {0};

int main()
{
    int tmp, n;

    scanf("%d", &tmp);
    for (int i = 0; i < tmp; i++)
    {
        scanf("%d", &n);
        cnt[n]++;
    }
    for (int i = 0; i <= size; i++)
    {
        if (cnt[i] == 0)
            continue;
        for (int j = 0; j < cnt[i]; j++)
        {
            printf("%d\n", i);
        }
    }
}