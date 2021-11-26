#include <stdio.h>

int main() {
    int temp, vel_med;
    float quant_lit;
    scanf("%d", &temp);
    scanf("%d", &vel_med);
    quant_lit = (vel_med / 12.0) * temp;
    printf("%.3f\n", quant_lit);
    return 0;
}