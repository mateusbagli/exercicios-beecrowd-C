#include <stdio.h>
#include <ctype.h>
#define tf 12

int main()
{
    float matriz [tf][tf], soma, media, n;
    char l;
    int i , j, cont;
    scanf(" %c", &l);
    l = toupper(l);
    soma = cont = 0;
    for(i=0; i<tf; i++)
        for(j=0; j<tf; j++)
        {
            scanf("%f", &n);
            matriz[i][j] = n;
            if(i + j > tf - 1)
            {
                soma+=matriz[i][j];
                cont++;
            }
        }
    if (l == 'S')
        printf("%.1f\n", soma);
    else
        printf("%.1f\n", soma/cont);
    
    return 0;
}
