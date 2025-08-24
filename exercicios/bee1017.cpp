#include <stdio.h>
#include <math.h>
int main() {
    int a, b, d;
    float l;
    scanf("%d%d",&a, &b);
    d = a*b;
    l = (float) d/12;
    printf("%.3f\n", l);
    return 0;
}
