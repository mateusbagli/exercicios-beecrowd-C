#include <stdio.h>
int main()
{
    float n1, n2, n3, n4, media, mf, nex;
    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
    n1*=2;
    n2*=3;
    n3*=4;
    n4*=1;
    media=(float)(n1+n2+n3+n4)/10;
    printf("Media: %.1f\n", media);
    if(media>=7)
        printf("Aluno aprovado.\n");
    else
        if(media>=5&&media<=6.9)
        {
            printf("Aluno em exame.\n");
            scanf("%f", &nex);
            printf("Nota do exame: %.1f\n", nex);
            mf=(float)(media+nex)/2;
            if(mf>=5)
                printf("Aluno aprovado.\n");
            else
                printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", mf);
        }
        else
            printf("Aluno reprovado.\n");
    
    return 0;
}
