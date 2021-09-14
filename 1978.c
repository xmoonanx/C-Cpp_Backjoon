#include <stdio.h>

int prime_number(int num)
{
    if (num < 2)
        return 0;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n, num, cnt = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {

        scanf("%d", &num);
        int is_prime = prime_number(num);
        if (is_prime)
            cnt++;
    }

    printf("%d", cnt);
}