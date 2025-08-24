#include <stdio.h>

int main()
{
    int N, M, i, j, soma, menor, maior, media, teste = 1, temp[10000];

    scanf("%d %d", &N, &M);

    while (N != 0 && M != 0) 
        {
        for (i = 0; i < N; i++) 
            scanf("%d", &temp[i]);
        soma = 0;
        for (i = 0; i < M; i++)
            soma += temp[i];
        menor = maior = soma / M;
        for (i = 1; i <= N - M; i++)
        {
            soma = 0;
            for (j = 0; j < M; j++)
                soma += temp[i + j];
            media = soma / M; 
            if (media < menor) menor = media;
            if (media > maior) maior = media;
        }

        printf("Teste %d\n", teste);
        printf("%d %d\n\n", menor, maior);

        teste++;
        scanf("%d %d", &N, &M);
    }

    return 0;
}
