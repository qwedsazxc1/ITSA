#include <stdio.h>
#include <stdlib.h>

int calculate_sum(int num);

int cmp(const void *a, const void *b){
    int front = *(int *)a;
    int back = *(int *)b;
    int front_sum = calculate_sum(front);
    int back_sum = calculate_sum(back);
    if (front_sum != back_sum){
        return front_sum > back_sum;
    }
    return front > back;
}

int calculate_sum(int num){
    int sum = 0;
    while (num){
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    qsort(arr, n, sizeof(int), cmp);
    for (int i = 0; i < n; i++){
        if (i != 0)
            printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}