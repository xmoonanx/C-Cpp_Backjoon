#include <stdio.h>

int main() {
    int in1, in2;
    int out1, out2, out3, out4;

    scanf("%d %d", &in1, &in2);
    out1 = in1 * ((in2 % 100) % 10);
    out2 = in1 * ((in2 % 100) / 10);
    out3 = in1 * (in2 / 100);
    out4 = in1 * in2;
    printf("%d\n%d\n%d\n%d", out1, out2, out3, out4);
    return 0;
}