#include <stdio.h>
 
int main() {
    float sal, c;
    int a, b;
    scanf("%d%d", &a,&b);
    scanf("%f", &c);
    sal = b*c;
    printf("NUMBER = %d\n", a);
    printf("SALARY = U$ %.2f\n", sal);
    return 0;
}
