#include <stdio.h>

int main()
{
    int n, title = 0, cnt = 0, tmp;
    scanf("%d", &n);

    while (cnt != n)
    {
        title++;
        tmp = title;

        while (tmp != 0)
        {
            if (tmp % 1000 == 666)
            {
                cnt++;
                break;
            }
            else
                tmp /= 10;
        }
    }
    printf("%d", title);
}