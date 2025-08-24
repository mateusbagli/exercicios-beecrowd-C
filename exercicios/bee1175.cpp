#include <stdio.h>
#define tf 20
int main()
{
    int i, vet[tf], n, aux, j;
    for(i=0; i<tf; i++)
    {
        scanf("%d", &n);
        vet[i] = n;
    }
    
    for(i=0, j=19; i<10; i++, j--)
    {
            
            aux = vet[i];
            vet[i] = vet[j];
            vet[j] = aux;
            
    }
    for(i=0; i<tf; i++)
        printf("N[%d] = %d\n", i, vet[i]);
    
    
    return 0;
}
