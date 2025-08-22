#include <stdio.h>

int main() {
    int funcionario, horas;
    double valor, SALARY;

    scanf("%d", &funcionario);
    scanf("%d", &horas);
    scanf("%lf", &valor);

    SALARY = horas * valor;

    printf("NUMBER = %d\n", funcionario);
    printf("SALARY = U$ %.2f\n", SALARY);

    return 0;
}
