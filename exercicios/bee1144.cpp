#include <stdio.h>
#include <math.h>

int main() 
{
    int n, q, a, b, c, ab, ac;
    scanf("%d", &n);
    q=1;
    a=1;
    b=1;
    c=1;
    ab= 2;
    ac= 2;
    while (q<=n)
    {
        printf("%d %d %d\n", a, b, c);
        b= b+1;
        c=c+1;
        printf("%d %d %d\n", a, b, c);
        b= b+ab;
        a= a+1;
        ab=ab+2;
        c= pow(ac, 3);
        ac= ac+1;
        q= q+1;
    }
    return 0;
}
