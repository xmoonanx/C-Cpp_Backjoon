#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    if (b >= c)
    {
        printf("%d", -1);
    }
    else
    { //a+(b*num) <= c*num :: // num >= a/(c-b)
        printf("%d\n", a / (c - b) + 1);
    }
}