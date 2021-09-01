#include <stdio.h>

int main(){
    int in, sum = 1;
    int num[10];

    for(int i=0; i<10; i++) num[i] = 0;

    for(int i = 0; i < 3; i++){
        scanf("%d", &in);
        sum *= in;
    }

    for(int i = 0 ; sum > 0; i++){
        in = sum%10;
        num[in] += 1;
        sum /= 10;
    }

    for(int i = 0; i < 10; i++){
        printf("%d\n", num[i]);
    }
}