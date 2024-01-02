#include <stdio.h>

int main(){
    int a[3];
    struct
    {
        double v[3]; // 16
        double length; // 16
    }b[17];
    int calendar[12][31];

    printf("a:%d\n", sizeof(a)); // 4*3=12
    printf("b:%d\n", sizeof(b)); // 17*(16+16)=544
    printf("calendar:%d\n", sizeof(calendar)); // 4*12*31=1488

    return 0;
}