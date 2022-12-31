#include <stdio.h>
#include <string.h>

void swap(char *a, char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int n;
    scanf("%d", &n);
    while (n--){
        char num1[50], num2[50];
        memset(num1, 0, sizeof(num1));
        memset(num2, 0, sizeof(num2));
        scanf("%s%s", num1, num2);
        char result[50];
        int num1_length = strlen(num1), num2_length = strlen(num2);
        for (int i = 0; i < num1_length / 2; i++){
            swap(num1 + i, num1 - 1 + num1_length - i);
        }
        for (int i = 0; i < num2_length / 2; i++){
            swap(num2 + i, num2 - 1 + num2_length - i);
        }
        for (int i = 0; i < 40; i++){
            if (!num1[i])
                num1[i] = '0';
            if (!num2[i])  
                num2[i] = '0';
        }
        int carry = 0;
        for (int i = 0; i < 40; i++){
            int temp = num1[i] - '0' + num2[i] - '0' + carry;
            if (temp >= 10){
                carry = 1;
                temp -= 10;
            }else
                carry = 0;
            
            result[i] = temp + '0';
        }
        int flag = 0;
        for (int i = 39; i >= 0; i--){
            if (flag){
                printf("%c", result[i]);
                continue;
            }
            if (result[i] == '0')
                continue;
            printf("%c", result[i]);
            flag = 1;
        }
        printf("\n");
    }
}