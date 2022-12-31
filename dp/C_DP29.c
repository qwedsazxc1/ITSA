#include <stdio.h>
#include <string.h>

int main(){
    int dice[] = {1, 2, 3, 4, 5, 6};
    int k, n;
    while (scanf("%d%d", &k, &n) != EOF){
        long long dp[n + 1];
        memset(dp, 0, sizeof(dp));
        dp[0] = 1;
        for (int i = 0; i < k; i++){
            for (int j = n; j >= 0; j--){
                for (int k = 1; k <= 6; k++){
                    if (j - k >= 0)
                        dp[j] += dp[j - k];
                }
            }
        }
        printf("%lld\n", dp[n]);
    }
}