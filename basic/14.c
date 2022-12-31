#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    while (scanf("%s", str) != EOF){
        int length = strlen(str);
        int flag = 1;

        for (int i = 0; i < length / 2; i++){
            if (str[i] != str[length - i - 1]){
                flag = 0;
                break;
            }
        }
        if (flag)
            printf("YES\n");
        else
            printf("NO\n");
    }    
}