#include <stdio.h>

int main(){
    setvbuf(stdout, NULL, _IOFBF, 4096);
    int r, c;
    while (scanf("%d%d", &r, &c) != EOF){
        int arr[r][c];
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                scanf("%d", &arr[i][j]);
        for (int j = 0; j < c; j++){
            for (int i = 0; i < r; i++){
                if (i != 0)
                    printf(" ");
                printf("%d", arr[i][j]);
            }
            printf("\n");    
        }
    }
}