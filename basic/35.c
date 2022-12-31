#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
    int front = *(int *)a;
    int back = *(int *)b;
    return front > back;
}

int main(){
    int t;
    scanf("%d", &t);
    while (t--){
        int sum, tar, n;
        scanf("%d%d%d", &sum, &tar, &n);
        int arr[n];
        for (int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }
        qsort(arr, n, sizeof(int), cmp);
        int temp = sum;
        for (int i = 0; i < tar; i++){
            temp -= arr[i];
        }
        if (temp < 0){
            printf("Impossible\n");
        }
        else{
            printf("%d\n", sum - temp);
        }
    }
}