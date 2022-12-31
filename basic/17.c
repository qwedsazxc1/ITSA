#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char str[1005];
    char *list[500];
    int size = 0;
    while (scanf("%s", str) != EOF){
        int flag = 0;
        for (char *ptr = str; *ptr != '\0'; ptr++){
            if (*ptr <= 'Z' && *ptr >= 'A')
                *ptr = *ptr - 'A' + 'a';
        }
        for (int i = 0; i < size; i++){
            if (strcmp(list[i], str) == 0){
                flag = 1;
                break;
            }
        }
        if (flag)
            continue;
        int length = strlen(str);
        list[size] = malloc(sizeof(char) * (length + 1));
        strcpy(list[size], str);
        size++;
    }
    for (int i = 0; i < size; i++){
        if (i != 0)
            printf(" ");
        printf("%s", list[i]);
    }
    printf("\n");
    return 0;
}