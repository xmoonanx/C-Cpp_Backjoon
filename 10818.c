#include <stdio.h>

int main(){
    int cnt, n;
    int max = -1000000, min = 1000000;
    scanf("%d", &cnt);
    for (int i =0; i < cnt; i++){
        scanf("%d ", &n);
        if(max<n) max = n;
        if(min>n) min = n;
    }

    printf("%d %d", min, max);
}