#include <stdio.h>

int main() {
    int dist;
    float tot_comb, cons_med;
    scanf("%d", &dist);
    scanf("%f", &tot_comb);
    cons_med = dist / tot_comb;
    printf("%.3f km/l\n", cons_med);
    return 0;
}