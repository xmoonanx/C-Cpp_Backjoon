#include <stdio.h>
#include <string.h>

int main()
{
    int n, cnt = 0, key = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char apl[100];
        scanf("%s", apl);
        if (strlen(apl) <= 2)
            cnt++;
        else
        {
            int over_cnt = 0;
            for (int j = 2; j < strlen(apl); j++)
            {
                for (int k = 0; k < j - 1; k++)
                {
                    if (apl[k] == apl[j] && apl[k + 1] == apl[j])
                    {
                        continue;
                    }
                    else if (apl[k] == apl[j])
                    {
                        over_cnt++;
                    }
                }
            }
            if (over_cnt == 0)
                cnt++;
        }
    }
    printf("%d", cnt);
}