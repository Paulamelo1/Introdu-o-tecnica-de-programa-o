#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int x = a, y = b, z = c;
    int temp;

    // Ordena em ordem crescente (bubble simples)
    if (x > y) { temp = x; x = y; y = temp; }
    if (y > z) { temp = y; y = z; z = temp; }
    if (x > y) { temp = x; x = y; y = temp; }

    // Imprime em ordem crescente
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);

    // Linha em branco
    printf("\n");

    // Imprime na ordem original
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);

    return 0;
}
