#include <stdio.h>

int main() {

    int X;
    float Y;
    scanf("%d %f", &X,&Y);

    double consumo = X /Y;
    printf("%.3lf km/l\n", consumo);
    
    return 0;
} 
