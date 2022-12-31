#include <stdio.h>
#include <string.h>

struct element{
    int value;
    int count;
};

int main(){
    char buffer[2048];
    while (fgets(buffer, 2048, stdin) != NULL){
        int arr[20], size = 0;
        for (char *ptr = buffer; *ptr != '\0';){
            int offset;
            if (sscanf(ptr, "%d%n", &arr[size], &offset) != 1)
                break;
            size++;
            ptr += offset;
        }
        struct element count[size];
        int c_size = 0;
        memset(count, 0, sizeof(count));
        for (int i = 0; i < size; i++){
            int insert = arr[i];
            int j = 0;
            for (; j < c_size; j++){
                if (arr[i] == count[j].value){
                    count[j].count += 1;
                    break;
                }

            }
            if (j == c_size){
                count[c_size].value = arr[i];
                count[c_size].count = 1;
                c_size++;
            }
        }
        int half = size / 2;
        int flag = 0;
        for (int i = 0; i < c_size; i++){
            if (count[i].count > half){
                printf("%d\n", count[i].value);
                flag = 1;
                break;
            }
        }
        if (!flag){
            printf("NO\n");
        }
    }
}