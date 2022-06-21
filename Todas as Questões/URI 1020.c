#include <stdio.h>

int main() {
    int n,a,ra, m, d;

    scanf("%d", &n);

    a = (n / 365);
    ra = (n % 365);
    m = (ra / 30);
    d = (ra % 30);
    
    printf("%d ano(s)\n", a);
    printf("%d mes(es)\n", m);
    printf("%d dia(s)\n", d);
    return 0;
}