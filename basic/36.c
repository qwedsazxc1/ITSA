#include <stdio.h>

int is_normal(int year){
    if (year % 4)
        return 1;
    if (year % 100)
        return 0;
    if (year % 400)
        return 1;
    return 0;
}

int main(){
    int n;
    while (scanf("%d", &n) != EOF){
        printf("%s\n", (is_normal(n)) ? "Common Year" : "Bissextile Year");
    }
}