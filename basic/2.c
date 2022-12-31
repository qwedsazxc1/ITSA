#include <stdio.h>

int main(){
    int n;
    while (scanf("%d", &n) != EOF){
        printf("%.1lf\n", (double)n * 1.6);
    }
}