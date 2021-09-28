#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    int apl[26];
    scanf("%s", s);
    for (int i = 0; i < 26; i++)
    {
        apl[i] = 0;
    }

    for (int i = 0; i < strlen(s); i++)
    {
        apl[(int)s[i] - 'a']++;
    }

    for (int j = 0; j < 26; j++)
    {
        printf("%d ", apl[j]);
    }
}