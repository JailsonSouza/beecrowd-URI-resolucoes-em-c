#include <stdio.h>

int main() {
    double a, b, c, area_tri, area_cir, area_tra, area_qua, area_ret;
    scanf("%lf %lf %lf", &a, &b, &c);
    area_tri = (a * c)/2;
    area_cir = 3.14159 * (c * c);
    area_tra = ((a + b) * c) / 2;
    area_qua = (b * b);
    area_ret = (a * b);
    printf("TRIANGULO: %.3lf\n", area_tri);
    printf("CIRCULO: %.3lf\n", area_cir);
    printf("TRAPEZIO: %.3lf\n", area_tra);
    printf("QUADRADO: %.3lf\n", area_qua);
    printf("RETANGULO: %.3lf\n", area_ret);
    return 0;
}