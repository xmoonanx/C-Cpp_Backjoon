#include <stdio.h>

int main()
{
    int n;
    int cnt = 0;
    scanf("%d", &n);

    if (n == 1)
    {
        printf("1");
    }

    else
    {
        int num = 2;
        while (n >= num)
        {
            num += 6 * (cnt++);
        }

        printf("%d", cnt);
    }
}
// block number 1 7 20 38 ... :: 6+6+6...
