#include <stdio.h>

int main() {
    double vol, pi, raio;
    pi = 3.14159;
    scanf("%lf", &raio);
    raio = pow(raio, 3);
    vol = (4/3.0) * pi * raio;
    printf("VOLUME = %.3lf\n", vol);
    return 0;
}