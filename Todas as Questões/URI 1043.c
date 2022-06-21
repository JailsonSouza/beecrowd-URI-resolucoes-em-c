#include <stdio.h>

int main() {
    float n1, n2, n3;

    scanf("%f %f %f", &n1, &n2, &n3);
    
    if (((n1+n2) > n3) && ((n2 + n3) > n1) && ((n1+n3)> n2)){
        float per;
        per = (n1+n2+n3);
        printf("Perimetro = %.1f\n", per);
    } else{
        float are;
        are = (((n1+n2)*n3)/2);
        printf("Area = %.1f\n", are);
    }
    return 0;
}