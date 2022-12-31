#include <stdio.h>

int main(){
    int h1, h2, m1, m2;
    scanf("%d%d%d%d", &h1, &m1, &h2, &m2);
    if (h2 < h1)
        h2 += 24;
    if (h2 == h1 && m2 < m1)
        h2 += 24;
    h2 -= h1;
    m2 -= m1;
    if (m2 < 0){
        h2 -= 1;
        m2 += 60;
    }
    int sum_minute = h2 * 60 + m2;
    int sum = 0;
    if (sum_minute <= 120){
        sum += (sum_minute / 30) * 30;
        sum_minute = 0;
    }
    else{
        sum_minute -= 120;
        sum += 120;
    }
    if (sum_minute <= 120){
        sum += (sum_minute / 30) * 40;
        sum_minute = 0;
    }
    else if (sum_minute > 0){
        sum_minute -= 120;
        sum += 160;
    }
    if (sum_minute > 0){
        sum += (sum_minute / 30) * 60;
        sum_minute = 0;
    }
    printf("%d\n", sum);
    return 0;
}