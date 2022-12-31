#include <stdio.h>

int main(){
    int n;
    while (scanf("%d", &n) != EOF){
        int sum = 0;
        for (int i = 3; i <= n; i += 3){
            sum += i;
        }
        printf("%d\n", sum);
    }
}