#include <stdio.h>

int main(){
    int degree;
    scanf("%d", &degree);
    if (degree <= 120){
        printf( "Summer months:%.2lf\n"\
                "Non-Summer months:%.2lf\n", 2.10 * (double)degree, 2.10 * (double)degree);
        return 0;
    }
    if (degree <= 330){
        printf( "Summer months:%.2lf\n"\
                "Non-Summer months:%.2lf\n", \
                3.02 * (double)(degree - 120) + (120 * 2.10), 2.68 * (double)(degree - 120) + (120 * 2.10));
        return 0;
    }
    if (degree <= 500){
        printf( "Summer months:%.2lf\n"\
                "Non-Summer months:%.2lf\n", \
                4.39 * (double)(degree - 330) + (120 * 2.10) + (210 * 3.02), \
                3.61 * (double)(degree - 330) + (120 * 2.10) + (210 * 2.68));
        return 0;
    }
    if (degree <= 700){
        printf( "Summer months:%.2lf\n"\
                "Non-Summer months:%.2lf\n", \
                4.97 * (double)(degree - 500) + (120 * 2.10) + (210 * 3.02) + (170 * 4.39), \
                4.01 * (double)(degree - 500) + (120 * 2.10) + (210 * 2.68) + (170 * 3.61));
        return 0;
    }

    printf( "Summer months:%.2lf\n"\
            "Non-Summer months:%.2lf\n", \
            5.63 * (double)(degree - 700) + (120 * 2.10) + (210 * 3.02) + (170 * 4.39) + (200 * 4.97), \
            4.50 * (double)(degree - 700) + (120 * 2.10) + (210 * 2.68) + (170 * 3.61) + (200 * 4.01));
    return 0;
}