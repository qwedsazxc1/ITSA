#include <stdio.h>
#include <string.h>

int main(){
    int coin[] = {1, 5, 10, 25, 50};
    int t;
    scanf("%d", &t);
    while (t--){
        int input;
        scanf("%d", &input);
        long long dp[input + 1];
        memset(dp, 0, sizeof(dp));
        dp[0] = 1;
        for (int i = 0; i < 5; i++){
            for (int j = coin[i]; j <= input; j++){
                dp[j] += dp[j - coin[i]];
            }
        }
        printf("%lld\n", dp[input]);
    }
    return 0;
}