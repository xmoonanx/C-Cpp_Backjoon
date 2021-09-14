#include <stdio.h>
#include <string.h>

void reverse(char arr[])
{
    int len = strlen(arr);

    for (int i = 0; i < len / 2; i++)
    {
        char temp = arr[i];
        arr[i] = arr[len - i - 1];
        arr[len - i - 1] = temp;
    }
}

void get_sum(char a[], char b[], char res[])
{
    int len, up = 0;
    if (strlen(a) > strlen(b))
        len = strlen(a);
    else
        len = strlen(b);
    reverse(a);
    reverse(b);

    for (int i = 0; i < len; i++)
    {
        int sum = a[i] - '0' + b[i] - '0' + up;
        while (sum < 0)
            sum += '0';
        if (sum > 9)
            up = 1;
        else
            up = 0;
        res[i] = sum % 10 + '0';
    }
    if (up == 1)
        res[len] = '1';
    reverse(res);
}

int main()
{
    char a[100000], b[100000];
    char res[100001];

    scanf("%s %s", a, b);
    get_sum(a, b, res);
    printf("%s", res);
}