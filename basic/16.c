#include <stdio.h>
#include <string.h>

int main(){
    char sub[256], str[1024];
    scanf("%s%s", sub, str);
    int count = 0, sub_length = strlen(sub);
    for (char *ptr = str; *ptr != '\0'; ptr++){
        if (strncmp(ptr, sub, sub_length) == 0)
            count++;
    }
    printf("%d\n", count);
}