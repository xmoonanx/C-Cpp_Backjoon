#include <stdio.h>

int main()
{
    int num[8], as = 0, des = 0;
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &num[i]);
    }
    for (int j = 0; j < 8; j++)
    {
        if (num[j] == j + 1)
        {
            as++;
        }
        else if (num[7 - j] == j + 1)
        {
            des++;
        }
    }
    if (as == 8)
    {
        printf("ascending");
    }
    else if (des == 8)
    {
        printf("descending");
    }
    else
        printf("mixed");
}