#include <stdio.h>

int main() {

   int codigo1, codigo2, unid1, unid2;
   float valor1, valor2;
    scanf("%d %d %f", &codigo1, &unid1, &valor1);
    scanf("%d %d %f", &codigo2, &unid2, &valor2);   
    float total = (unid1 * valor1) + (unid2 * valor2);
    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}
