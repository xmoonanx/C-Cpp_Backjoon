#include <stdio.h>

int main()
{
    int n, min_bag = 0;
    scanf("%d", &n);

    while (1)
    {
        if (n % 5 == 0)
        {
            min_bag += n / 5;
            printf("%d", min_bag);
            break;
        }

        n = n - 3;
        min_bag += 1;

        if (n < 0)
        {
            printf("-1");
            break;
        }
    }
}