#include <stdlib.h>
#include <stdio.h>
int main() {
    int maior, maior2, a, b ,c;
    scanf("%d%d%d",&a,&b,&c);
    maior= ((a+b)+abs(a-b))/2;
    maior2= ((maior+c)+abs(maior-c))/2;
    printf("%d eh o maior\n", maior2);
    return 0;
}
