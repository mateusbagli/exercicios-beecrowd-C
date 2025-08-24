#include <stdio.h>

int main() {
    
    double n1, n2, t;
    char vet[40];
    scanf("%s", &vet);
    scanf("%lf%lf", &n1, &n2);
    t= n1+n2*0.15;
    printf("TOTAL = R$ %.2lf\n", t);
    return 0;
}
