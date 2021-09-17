#include <stdio.h>

int is_prime_num(int num)
{
    if (num < 2)
    {
        return 0;
    }
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int get_prime_num_sum(int n1, int n2)
{
    int sum = 0;

    for (int i = n1; i <= n2; i++)
    {
        int is_prime = is_prime_num(i);
        if (is_prime)
        {
            sum += i;
        }
    }
    return sum;
}

int print_min_prime_num(int n1, int n2)
{
    int min = 0, n;
    for (int i = n1; i <= n2; i++)
    {
        if (is_prime_num(i))
        {
            min = i;
            break;
        }
    }
    return min;
}

int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    int sum = get_prime_num_sum(n1, n2);
    int min = print_min_prime_num(n1, n2);
    if (sum == 0)
    {
        printf("-1");
    }
    else
        printf("%d\n%d", sum, min);
}