#include <stdio.h>

void change(int s[])
{
    if (s[0] == s[1])
    {
        s[3] = s[2];
    }
    else if (s[0] == s[2])
    {
        s[3] = s[1];
    }
    else
    {
        s[3] = s[0];
    }
}

int main()
{
    int x[4], y[4];

    for (int i = 0; i < 3; i++)
    {
        scanf("%d %d", &x[i], &y[i]);
    }
    change(x);
    change(y);

    printf("%d %d", x[3], y[3]);
}