#include <stdio.h>
#include <string.h>

int min(int a, int b){
    if (a > b)
        return b;
    return a;
}

int main(){
    int coin[] = {1, 5, 50};
    int fruit[] = {15, 20, 30};
    int fruit_amount[3];
    int max_number;
    scanf("%d,%d,%d,%d", &max_number, &fruit_amount[0], &fruit_amount[1], &fruit_amount[2]);
    for (int i = 0; i < 3; i++)
        max_number -= fruit_amount[i] * fruit[i];
    
    if (max_number < 0){
        printf("0\n");
        return 0;
    }
    for (int i = 2; i >= 0; i--){
        fruit_amount[i] = max_number / coin[i];
        max_number %= coin[i];
    }
    printf("%d,%d,%d\n", fruit_amount[0], fruit_amount[1], fruit_amount[2]);
    return 0;
}