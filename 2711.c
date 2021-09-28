#include <stdio.h>
#include <string.h>

int main()
{
    char s[81];
    int T, p;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d %s", &p, s);
        for (int j = 0; j < strlen(s); j++)
        {
            if (j != p - 1)
            {
                printf("%c", s[j]);
            }
        }
        printf("\n");
    }
}