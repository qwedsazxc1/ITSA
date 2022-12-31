#include <stdio.h>
#include <string.h>

int cmp(char *str1, char *str2){
    if (str1[0] == str2[0]){
        int a1, a2;
        sscanf(str1 + 1, "%d", &a1);
        sscanf(str2 + 1, "%d", &a2);
        return (a1 < a2);
    }

    return (str1[0] < str2[0]);
}

int main(){
    int n;
    scanf("%d", &n);
    if ('\r' == getchar())
        getchar();
    while (n--){
        char buffer[2048];
        fgets(buffer, 2048, stdin);
        char list[100][10];
        int size = 0;
        for (char *ptr = buffer; *ptr != '\0';){
            int offset;
            if (sscanf(ptr, "%s%n", list[size], &offset) != 1)
                break;;
            size++;
            ptr += offset;
        }
        for (int i = 0; i < size - 1; i++){
            for (int j = 0; j < size - 1 - i; j++){
                if (cmp(&list[j][0], &list[j + 1][0])){
                    // swap
                    char temp[30];
                    strcpy(temp, list[j]);
                    strcpy(list[j], list[j + 1]);
                    strcpy(list[j + 1], temp);
                }
            }
        }
        for (int i = 0; i < size; i++){
            if (i != 0)
                printf(" ");
            printf("%s", list[i]);
        }
        printf("\n");
    }
}