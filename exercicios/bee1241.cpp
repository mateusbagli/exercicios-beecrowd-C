#include <stdio.h>
#include<string.h>
#define tf 1001
int main()
{
    int n, i, qb, j, qa, k, cont;
    char a[tf], b[tf];
    scanf("%d", &n);
    getchar();
    for(i=0; i<n; i++)
    {
        scanf("%s%s", a, b);
        qa = strlen(a);
        qb = strlen(b);
        if(qa>=qb)
        {
            cont = 0;
            for(k = 0, j= qa-qb; j<qa; j++, k++)
            {
            if(a[j] == b[k])
                cont++;
            }
            if(cont == qb)
               printf("encaixa\n");
            else
                printf("nao encaixa\n");
        }
        else
            printf("nao encaixa\n");
            
            
    }
    return 0;
}
