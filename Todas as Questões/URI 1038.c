#include <stdio.h>

int main() {
    int c, q;
    double p, tot;
    
    scanf("%d %d", &c, &q);

    if (c == 1){
        p = 4.00;
    }else if (c == 2){
        p = 4.50;
    }else if (c == 3){
        p = 5.00;
    }else if (c == 4){
        p = 2.00;
    }else if (c == 5){
        p = 1.50;
    }
    tot = p * q;
    printf("Total: R$ %.2lf\n", tot);
    return 0;
}