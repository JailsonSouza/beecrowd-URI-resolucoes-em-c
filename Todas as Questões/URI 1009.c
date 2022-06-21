#include <stdio.h>

int main() {
    char nome;
    double sal_f, mont_v, sal_m, total;

    scanf("%s", &nome);
    scanf("%lf", &sal_f);
    scanf("%lf", &mont_v);

    sal_m = ((mont_v * 15) / 100);
    total = (sal_f + sal_m);
    
    printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}