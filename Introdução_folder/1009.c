#include <stdio.h>

int main() {
    char nome[100];
    double salario, vendasmes;
    scanf("%s", nome);
    scanf("%lf", &salario);
    scanf("%lf", &vendasmes);

    double total = salario + (vendasmes * 0.15);
    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}
