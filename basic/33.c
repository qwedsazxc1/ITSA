#include <stdio.h>

int main(){
    int arr[1000];
    char buffer[1024];
    while (fgets(buffer, 1024, stdin) != NULL){
        int size = 0, sum = 0;
        for (char *ptr = buffer; *ptr != '\0';){
            int offset;
            if (sscanf(ptr, "%d%n", &arr[size], &offset) != 1)
                break;
            sum += arr[size++];
            ptr += offset;
        }
        printf("Size: %d\n", size);
        printf("Average: %.3lf\n", (double)sum / size);
    }
}