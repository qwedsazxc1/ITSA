#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    getchar();
    getchar();
    while (n--){
        int sum = 0;
        char c ;
        while ((c = getchar()) != EOF){
            if (c == '\r')
                continue;
            if (c == EOF || c == '\n')
                break;;
            sum += c;
        }
        
        printf("%d\n", sum);
    }
    return 0;
}