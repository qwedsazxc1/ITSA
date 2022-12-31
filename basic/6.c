#include <stdio.h>

int main(){
    int n;
    while (scanf("%d", &n) != EOF){
        if (n <= 5 && n >= 3){
            printf("Spring\n");
            continue;
        }
        if (n <= 8 && n >= 6){
            printf("Summer\n");
            continue;
        }
        if (n <= 11 && n >= 9){
            printf("Autumn\n");
            continue;
        }
        printf("Winter\n");
    }
    return 0;
}