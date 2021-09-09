#include <stdio.h>

int main()
{
    int A, B, V;
    int d = 0;
    scanf("%d %d %d", &A, &B, &V);
    d = (V - B - 1) / (A - B) + 1;
    printf("%d", d);
}