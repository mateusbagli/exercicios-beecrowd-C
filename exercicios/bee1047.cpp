#include <stdio.h>
int main()
{
    int hi, mi, ht, mt, hf, mf;
    scanf("%d%d%d%d", &hi, &mi, &ht, &mt);

    if (hi == ht && mi == mt) {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    } else {
        if (hi < ht) {
            if (mi <= mt) {
                hf = ht - hi;
                mf = mt - mi;
            } else {
                hf = ht - hi - 1;
                mf = 60 - mi + mt;
            }
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hf, mf);
        }
        else if (hi > ht) {
            if (mi <= mt) {
                hf = 24 - hi + ht;
                mf = mt - mi;
            } else {
                hf = 24 - hi + ht - 1;
                mf = 60 - mi + mt;
            }
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hf, mf);
        }
        else if (hi == ht) {
            if (mi < mt) {
                mf = mt - mi;
                printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n", mf);
            } else {
                mf = 60 - mi + mt;
                printf("O JOGO DUROU 23 HORA(S) E %d MINUTO(S)\n", mf);
            }
        }
    }

    return 0;
}
