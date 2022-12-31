#include <stdio.h>

int main(){
    int height, gender;
    while (scanf("%d%d", &height, &gender) != EOF){
        if (gender == 1){
            printf("%.1lf\n", (double)(height - 80) * 0.7);
        }
        else{
            printf("%.1lf\n", (double)(height - 70) * 0.6);
        }
    }
}