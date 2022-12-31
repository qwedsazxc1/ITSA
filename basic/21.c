#include <stdio.h>

int main(){
    double arr[10];
    for (int i = 0; i < 10; i++){
        scanf("%lf", &arr[i]);
    }
    double max = arr[0], min = arr[0];
    for (int i = 0; i < 10; i++){
        if (max < arr[i])
            max = arr[i];
        if (min > arr[i])
            min = arr[i];
    }
    printf( "maximum:%.2lf\n"\
            "minimum:%.2lf\n", max, min);
    return 0;
}