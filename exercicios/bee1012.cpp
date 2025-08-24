#include <stdio.h>
int main() {
    double a, b ,c, a1, a2, a3, a4, a5;
    scanf("%lf%lf%lf",&a,&b,&c);
    a1= a*c/2;
    a2= c*c * 3.14159;
    a3= (a+b)*c/2;
    a4= b*b;
    a5= a*b;
    
    printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n", a1, a2, a3, a4, a5);
    return 0;
}
