#include <stdio.h>

int main() {
    int num_p1, quant_p1, num_p2, quant_p2;
    float val_p1, val_p2, tot_p1, tot_p2, total;

    scanf("%d %d %f", &num_p1, &quant_p1, &val_p1);
    scanf("%d %d %f", &num_p2, &quant_p2, &val_p2);

    tot_p1 = (quant_p1 * val_p1);
    tot_p2 = (quant_p2 * val_p2);
    total = (tot_p1 + tot_p2);
    
    printf("VALOR A PAGAR: R$ %.2f\n", total);
    return 0;
}