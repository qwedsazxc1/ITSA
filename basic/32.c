#include <stdio.h>

char cascer(char c, int offset){
    while (offset < 0)
        offset += 26;
    offset %= 26;
    if (c >= 'a' && c <= 'z'){
        c -= 'a';
        c += offset;
        c %= 26;
        c += 'a';
        return c;
    }
    if (c >= 'A' && c <= 'Z'){
        c -= 'A';
        c += offset;
        c %= 26;
        c += 'A';
        return c;
    }
    if (c >= '0' && c <= '9'){
        c -= '0';
        c += offset;
        c %= 10;
        c += '0';
        return c;
    }
    return c;
}

int main(){
    char buffer[200];
    fgets(buffer, 200, stdin);
    int offset;
    scanf("%d", &offset);
    int flag = 0;
    for (char *ptr = buffer; *ptr != '\0'; ptr++){
        char temp = cascer(*ptr, offset);   
        if (temp == '\n')
            flag = 1;         
        putchar(temp);
    }
    if (!flag)
        printf("\n");
    return 0;
}