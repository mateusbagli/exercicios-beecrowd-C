#include <stdio.h>
int main()
{
    int c, q;
    float p, v;
    scanf("%d%d", &c, &q);
    switch(c)
    {
        case 1:v=4.0; break;
        case 2:v=4.5; break;
        case 3:v=5.0; break;
        case 4:v=2.0; break;
        case 5:v=1.5; break;
    }
    p = q*v;
    printf("Total: R$ %.2f\n", p);
    return 0;
}
