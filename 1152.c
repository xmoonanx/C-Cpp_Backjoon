#include <stdio.h>
#include <string.h>

int main()
{
    int var = 1;
    char c[1000001];

    scanf("%[^\n]s", c);

    for (int i = 0; i < strlen(c); i++)
    {
        if (c[i] == ' ')
        {
            var++;
        }
    }
    if (c[0] == ' ' && c[strlen(c) - 1] == ' ')
    {
        var -= 2;
    }

    else if (c[0] == ' ' || c[strlen(c) - 1] == ' ')
    {
        var -= 1;
    }

    printf("%d", var);
}
