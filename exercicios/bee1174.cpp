#include <stdio.h>
#define tf 100
int main()
{
    int i, vetp[tf], tl = 0;
    double vet[tf], vetv[tf], n;
    for(i=0; i<tf; i++)
    {
        scanf("%lf", &n);
        vet[i] = n;
    }
    
    for(i=0; i<tf; i++)
        if(vet[i] <=  10)
        {
            vetv[tl] = vet[i];
            vetp[tl] = i;
            tl++;
        }
    for(i=0; i<tl; i++)
        printf("A[%d] = %.1lf\n", vetp[i], vetv[i]);
    
    
    return 0;
}
