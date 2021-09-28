#include <stdio.h>

int main()
{
    char apl[101];
    scanf("%s", apl);
    for (int i = 0; apl[i] != '\0'; i++)
    {
        if (apl[i] >= 'A' && apl[i] <= 'Z')
        {
            apl[i] += 'a' - 'A';
        }
        else if (apl[i] >= 'a' && apl[i] <= 'z')
        {
            apl[i] += 'A' - 'a';
        }
        printf("%c", apl[i]);
    }
}