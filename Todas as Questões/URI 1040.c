#include <stdio.h>

int main() {
    double n1, n2, n3, n4, media, noEx, medFinal;

    scanf("%lf", &n1);
    scanf("%lf", &n2);
    scanf("%lf", &n3);
    scanf("%lf", &n4);

    media = (((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10);
    printf("Media: %.1lf\n", media);

    if (media >= 7.0){
        printf("Aluno aprovado.\n");
    }else if (media < 5.0){
        printf("Aluno reprovado.\n");
    }else if ((media >= 5.0) && (media <= 6.9)){
        printf("Aluno em exame.\n");
        scanf("%lf", &noEx);
        printf("Nota do exame: %.1lf\n", noEx);

        medFinal = ((media + noEx) / 2);
        if (medFinal >= 5.0){
            printf("Aluno aprovado.\n");
        }else if (medFinal <= 4.9){
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", medFinal);
    }
    
    return 0;
}