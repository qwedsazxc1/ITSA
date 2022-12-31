#include <stdio.h>

int main(){
    int n;
    while (scanf("%d", &n) != EOF){
        if (n == 2 || n == 3){
            printf("YES\n");
            continue;
        }
        int flag = 1;
        for (int i = 2; i * i <= n; i++){
            if (n % i == 0){
                flag = 0;
                break;
            }
        }
        if (flag)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}