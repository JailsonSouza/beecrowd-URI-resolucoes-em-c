#include <stdio.h>

int main() {
    int n, n100, n50, n20, n10, n5, n2, n1, rest100, rest50, rest20, rest10, rest5, rest2, rest1;

    scanf("%d", &n);

    n100 = n / 100;
    rest100 = n % 100;
    n50 = rest100 / 50;
    rest50 = rest100 % 50;
    n20 = rest50 / 20;
    rest20 = rest50 % 20;
    n10 = rest20 / 10;
    rest10 = rest20 % 10;
    n5 = rest10 / 5;
    rest5 = rest10 % 5;
    n2 = rest5 / 2;
    rest2 = rest5 % 2;
    n1 = rest2 / 1;
    
    printf("%d\n", n);
    printf("%d nota(s) de R$ 100,00\n", n100);
    printf("%d nota(s) de R$ 50,00\n", n50);
    printf("%d nota(s) de R$ 20,00\n", n20);
    printf("%d nota(s) de R$ 10,00\n", n10);
    printf("%d nota(s) de R$ 5,00\n", n5);
    printf("%d nota(s) de R$ 2,00\n", n2);
    printf("%d nota(s) de R$ 1,00\n", n1);
    return 0;
}