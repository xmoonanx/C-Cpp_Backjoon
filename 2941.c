#include <stdio.h>
#include <string.h>

int main()
{
    char apl[101];
    scanf("%s", apl);
    int sum = strlen(apl);
    for (int i = 0; i < strlen(apl); i++)
    {
        if ((apl[i] == 'l' || apl[i] == 'n') && apl[i + 1] == 'j')
        {
            sum--;
        }

        if (apl[i] == '=' || apl[i] == '-')
        {
            sum--;
        }
        if (apl[i] == 'd' && apl[i + 1] == 'z' && apl[i + 2] == '=')
        {
            sum--;
        }
    }

    printf("%d", sum);
}