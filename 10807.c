#include <stdio.h>

int main()
{
    int n, num[101], v;
    int cnt = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    scanf("%d", &v);

    for (int i = 0; i < n; i++)
    {
        if (num[i] == v)
        {
            cnt++;
        }
    }
    printf("%d", cnt);
}