#include <stdio.h>

int main()
{
    int n, q, a, b, c;
    scanf("%d", &n);
    q= 1;
    a= 1;
    b= 2;
    c= 3;
    while(q<=n)
    {
        printf("%d %d %d PUM\n", a, b, c);
        q= q+1;
        a=a+4;
        b=b+4;
        c=c+4;
    }  
    return 0;
}
