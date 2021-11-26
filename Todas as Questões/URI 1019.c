#include <stdio.h>

int main() {
    int n,h,rh, m, s;
    scanf("%d", &n);
    h = (n / 3600);
    rh = (n % 3600);
    m = (rh / 60);
    s = (rh % 60);
    printf("%d:%d:%d\n", h,m,s);
    return 0;
}