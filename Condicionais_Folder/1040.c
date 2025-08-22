#include <stdio.h>

int main () {

    float N1, N2,N3, N4;
    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);

    float MEDIA = (N1 * 2 + N2 * 3 + N3 * 4 + N4) / 10;

    if (MEDIA >= 7.0) {
        printf("Media: %.1f\n", MEDIA);
        printf("Aluno aprovado.\n");
    }
    if (MEDIA < 5.0) {
        printf("Media: %.1f\n", MEDIA);
        printf("Aluno reprovado.\n");
    }
    if (MEDIA >= 5.0 && MEDIA < 7.0) {
        printf("Media: %.1f\n", MEDIA);
        printf("Aluno em exame.\n");

        float nota_exame;
        scanf("%f", &nota_exame);

        printf("Nota do exame: %.1f\n", nota_exame);
        float nova_media = (MEDIA + nota_exame) / 2;
        
        if (nova_media >= 5.0) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", nova_media);
    }
}
