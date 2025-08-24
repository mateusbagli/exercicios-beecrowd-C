#include <stdio.h>

int main() 
{
    int a, b, maior=0;
    scanf("%d%d", &a,&b);
    if(a>maior)
    {
        maior=a;
    if(b>maior)
    {
        maior=b;
        if(maior%a==0)
            printf("Sao Multiplos\n");
        else
            printf("Nao sao Multiplos\n");
    }
    else
        if(maior%b==0)
            printf("Sao Multiplos\n");
        else
            printf("Nao sao Multiplos\n");
    }
    return 0;
}
