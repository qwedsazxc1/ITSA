#include <stdio.h>

int main(){
    int coin[] = {1, 5, 10, 50};
    int cost[4] = {};
    int merchandise[2] = {17, 25};
    int k, class, number;
    scanf("%d,%d,%d", &k, &class, &number);
    k -= merchandise[class - 1] * number;
    for (int i = 3; i >= 0; i--){
        cost[i] = k / coin[i];
        k %= coin[i];
    }
    int flag = 0;
    for (int i = 0; i < 4; i++){
        if (cost[i]){
            if (flag)
                printf(",");
            printf("Coin %d:%d", coin[i], cost[i]);
            
            flag = 1;
        }
    }
    printf("\n");
    return 0;
}