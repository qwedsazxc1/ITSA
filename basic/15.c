#include <stdio.h>

int main(){
    char buffer[100];
    int count[26] = {}, word_count = 0;
    while (scanf("%s", buffer) != EOF){
        for (char *ptr = buffer; *ptr != '\0'; ptr++){
            if ((*ptr <= 'z' && *ptr >= 'a') || (*ptr <= 'Z' && *ptr >= 'A')){
                if (*ptr <= 'z' && *ptr >= 'a')
                    count[*ptr - 'a'] += 1;
                else
                    count[*ptr - 'A'] += 1;
            }
        }
        word_count++;
    }
    printf("%d\n", word_count);
    for (int i = 0; i < 26; i++){
        if (count[i]){
            printf("%c : %d\n", i + 'a', count[i]);
        }
    }
}