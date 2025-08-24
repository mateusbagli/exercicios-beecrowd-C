#include <stdio.h>
#define tf 61
int main()
{
    int i, v, n;
    unsigned long long vet[tf];
    vet[0]=0;
    vet[1]=1;
    for(i=2; i<tf; i++)
    {
        vet[i] = vet[i-1] + vet[i-2];
    }
    scanf("%d", &v);
    for(i=0; i<v; i++)
    {
        scanf("%d", &n);
        printf("Fib(%d) = %llu\n", n, vet[n]);
    }
    
    
    return 0;
}
