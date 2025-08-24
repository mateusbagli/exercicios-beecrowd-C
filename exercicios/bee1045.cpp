#include <stdio.h>

int main() {
    double a, b, c;

    // Leitura dos lados
    scanf("%lf %lf %lf", &a, &b, &c);

    // Coloca os lados em ordem decrescente: a >= b >= c
    if (a < b) {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    if (a < c) {
        a = a + c;
        c = a - c;
        a = a - c;
    }
    if (b < c) {
        b = b + c;
        c = b - c;
        b = b - c;
    }

    if (a >= b + c) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if (a * a == b * b + c * c)
            printf("TRIANGULO RETANGULO\n");
        if (a * a > b * b + c * c)
            printf("TRIANGULO OBTUSANGULO\n");
        if (a * a < b * b + c * c)
            printf("TRIANGULO ACUTANGULO\n");

        if (a == b && b == c)
            printf("TRIANGULO EQUILATERO\n");
        else if (a == b || a == c || b == c)
            printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}
