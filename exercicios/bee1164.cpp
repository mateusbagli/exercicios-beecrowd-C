#include <stdio.h>

int main() {
    int t, n, i=0, d, soma;
    scanf("%d", &t);
    while (i<t) 
	{
        scanf("%d", &n);
        soma = 0;
        d=1;
        while (d<= n/2) 
		{
            if (n%d==0)
			{
                soma += d;
            }
            d++;
        }
        if(soma == n) 
            printf("%d eh perfeito\n", n);
		else 
            printf("%d nao eh perfeito\n", n);
        i++;
    }

    return 0;
}
