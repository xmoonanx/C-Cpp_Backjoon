#include <stdio.h>

int main()
{
    int n[30] = {0}, num;
    for (int i = 0; i < 28; i++)
    {
        scanf("%d", &num);
        n[num - 1] = num;
    }

    for (int j = 0; j < 30; j++)
    {
        if (n[j] == 0)
        {
            printf("%d\n", j + 1);
        }
    }
}