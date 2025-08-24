#include <stdio.h>
#include <ctype.h>
#define tf 12

int main()
{
    float matriz [tf][tf], soma, media, n;
    char l;
    int linha, i , j;
    scanf("%d", &linha);
    scanf(" %c", &l);
    l = toupper(l);
    soma = 0;
    for(i=0; i<tf; i++)
    
        for(j=0; j<tf; j++)
        {
            scanf("%f", &n);
            matriz[i][j] = n;
            if(j == linha)
               soma += matriz[i][j]; 
        }
    if (l == 'S')
        printf("%.1f\n", soma);
    else
        printf("%.1f\n", soma/tf);
    
    return 0;
}
