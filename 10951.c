#include <stdio.h>

int main(){
    int a,b;
    while(scanf("%d %d", &a,&b) != EOF){ //EOF =End Of File == define EOF (-1)
        
        printf("%d\n", a+b);
    }
}