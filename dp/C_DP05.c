#include <stdio.h>
#include <string.h>

struct item{
    int size, value, final_count;
    char name[100];
};

struct element{
    int value;
    int last;
    int item_id;
};

int main(){
    int size, n;
    scanf("%d%d", &size, &n);
    struct item arr[n];
    for (int i = 0; i < n; i++){
        arr[i].final_count = 0;
        scanf("%d%d%s", &arr[i].size, &arr[i].value, arr[i].name);
    }
    
    struct element dp[size + 1];
    for (int i = 0; i <= size; i++){
        dp[i].item_id = -1;
        dp[i].value = 0;
        dp[i].last = -1;
    }
    for (int i = 0; i < n; i++){
        for (int j = arr[i].size; j <= size; j++){
            int now = dp[j].value;
            int new = dp[j - arr[i].size].value + arr[i].value;
            if (new > now){
                dp[j].item_id = i;
                dp[j].value = new;
                dp[j].last = j - arr[i].size;
            }
        }
    }
    printf("Total: %d", dp[size].value);
    int flag = 0;
    for (int temp = size; dp[temp].last != -1; temp = dp[temp].last){
        arr[dp[temp].item_id].final_count += 1;
        flag = 1;
    }
    if (flag){
        printf(", including");
        for (int i = 0; i < n; i++){
            if (arr[i].final_count)
                printf(" %d %s", arr[i].final_count, arr[i].name);
        }
    }
    printf("\n");
    return 0;
}
