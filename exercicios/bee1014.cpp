#include <stdio.h>
int main() {
    int a;
    float b, kml;
    scanf("%d%f",&a, &b);
    kml= (float)a/b;
    printf("%.3f km/l\n", kml);
    return 0;
}
