#include <stdio.h>

int main() {
    int num, num_h;
    float val_h, salario;

    scanf("%d", &num);
    scanf("%d", &num_h);
    scanf("%f", &val_h);

    salario = (num_h * val_h);
    
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2f\n", salario);
    return 0;
}