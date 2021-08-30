#include <stdio.h>

int main(){
    int n[9], big = 0;
    int in;
    for (int i =0; i < 9; i++){
        scanf("%d ", &n[i]);
        if(big<n[i]){
            big = n[i];
            in = i;
        }
    }
       

    printf("%d %d", big, in+1);
}