#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    while (scanf("%s", str) != EOF){
        int lis[100], length = 0;
        memset(lis, 0, sizeof(lis));
        for (char *ptr = str; *ptr != '\0'; ptr++){
            int num = *ptr - '0';
            for (int i = 0; i < 100; i++){
                if (num >= lis[i]){
                    lis[i] = num;
                    break;
                }
            }
        }
        for (int i = 0; i < 100; i++){
            if (!lis[i])
                break;
            printf("%d", lis[i]);
        }
        printf("\n");
    }
}