#include <stdio.h>
#include <math.h>

int main() {

    double X1, Y1, X2, Y2;
    scanf("%lf %lf", &X1, &Y1);
    scanf("%lf %lf", &X2, &Y2);

    double distancia = sqrt(((X2 - X1) * (X2 - X1)) + ((Y2 - Y1) * (Y2 - Y1)));

    printf("%.4lf\n", distancia);

    return 0;
}
