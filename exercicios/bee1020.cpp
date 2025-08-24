#include <stdio.h>
#include <math.h>
int main() {
    int i, ano, mes, dia, r;
    scanf("%d",&i);
    ano= i/365;
    r=i%365;
    mes= r/30;
    dia= r%30;
    
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);
    return 0;
}
