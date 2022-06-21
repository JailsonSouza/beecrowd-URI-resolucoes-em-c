#include <stdio.h>

int main() {
    double vol, raio;

    scanf("%lf", &raio);

    raio = pow(raio, 3);
    vol = (4/3.0) * 3.14159 * raio;
    
    printf("VOLUME = %.3lf\n", vol);
    return 0;
}