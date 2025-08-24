#include <stdio.h>
#include <string.h>

#define TF 1000

int main() {
    int N, i, j, k, p, pos, len;
    char linha[TF];
    char letra;

    while (scanf("%d", &N) == 1 && N != 0) {
        getchar(); // consome o '\n' após o número N
        for (i = 0; i < N; i++) {
            fgets(linha, TF, stdin);

            len = strlen(linha);
            if (linha[len - 1] == '\n') {
                linha[len - 1] = '\0';
                len--;
            }

            k = 1;
            for (j = 0; linha[j] != '\0'; j++) {
                if (linha[j] == ' ') {
                    k++;
                }
            }

            p = 0;
            for (j = 0; linha[j] != ' ' && linha[j] != '\0'; j++) {
                if (linha[j] == '.') {
                    p++;
                }
            }

            pos = (k - 1) * 3 + p;
            letra = 'a' + pos - 1;

            printf("%c\n", letra);
        }
    }

    return 0;
}

