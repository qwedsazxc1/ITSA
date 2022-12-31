#include <stdio.h>

int main(){
    int n;
    while (scanf("%d", &n) != EOF){
        int bin[8];
        for (int i = 7; i >= 0; i--){
            bin[i] = n & 1;
            n >>= 1;
        }
        for (int i = 0; i < 8; i++)
            printf("%d", bin[i]);
        printf("\n");
    }
}