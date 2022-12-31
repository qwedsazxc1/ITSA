#include <stdio.h>

int main(){
    int x, y;
    while (scanf("%d%d", &x, &y) != EOF){
        int distance = x * x + y * y;
        if (distance >= 10000)
            printf("outside\n");
        else
            printf("inside\n");
    }
}