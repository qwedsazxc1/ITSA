#include <stdio.h>

int main(){
    setvbuf(stdout, NULL, _IOFBF, 4096);
    int t;
    scanf("%d", &t);
    while (t--){
        char operator;
        int a1, a2, b1, b2;
        scanf(" %c%d%d%d%d", &operator, &a1, &a2, &b1, &b2);
        if (operator == '+'){
            printf("%d %d\n", a1 + b1, a2 + b2);
            continue;
        }
        if (operator == '-'){
            printf("%d %d\n", a1 - b1, a2 - b2);
            continue;
        }
        printf("%d %d\n", a1 * b1 - a2 * b2, a1 * b2 + b1 * a2);
    }
}