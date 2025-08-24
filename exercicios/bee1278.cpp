#include <stdio.h>
#include <string.h>

#define tf 100
#define l 52

int main()
{
    int n, i, j, k, maior, z, qespc, flag;
    char mat[tf][l];
    char temp[l];
    int inicio, len, t, espaco;

    flag = 0;
    scanf("%d", &n);
    getchar();

    while (n != 0)
    {
        maior = 0;

        for (i = 0; i < n; i++)
        {
            fgets(mat[i], l, stdin);

            for (j = 0; mat[i][j] != '\0'; j++)
            {
                if (mat[i][j] == '\n')
                    mat[i][j] = '\0';
            }
            inicio = 0;
            while (mat[i][inicio] == ' ')
                inicio++;

            if (inicio > 0)
            {
                for (j = 0; mat[i][j + inicio] != '\0'; j++)
                    mat[i][j] = mat[i][j + inicio];
                mat[i][j] = '\0';
            }

            len = strlen(mat[i]);
            while (len > 0 && mat[i][len - 1] == ' ')
            {
                len--;
                mat[i][len] = '\0';
            }

            t = 0;
            espaco = 0;
            for (j = 0; mat[i][j] != '\0'; j++)
            {
                if (mat[i][j] != ' ')
                {
                    temp[t] = mat[i][j];
                    t++;
                    espaco = 0;
                }
                else
                {
                    if (espaco == 0)
                    {
                        temp[t] = ' ';
                        t++;
                        espaco = 1;
                    }
                }
            }
            temp[t] = '\0';

            for (j = 0; temp[j] != '\0'; j++)
                mat[i][j] = temp[j];
            mat[i][j] = '\0';

            if (strlen(mat[i]) > maior)
                maior = strlen(mat[i]);
        }
        if (flag != 0)
            printf("\n");
        flag = 1;

        for (i = 0; i < n; i++)
        {
            qespc = maior - strlen(mat[i]);
            for (k = 0; k < qespc; k++)
                printf(" ");
            printf("%s\n", mat[i]);
        }

        scanf("%d", &n);
        getchar();
    }

    return 0;
}

