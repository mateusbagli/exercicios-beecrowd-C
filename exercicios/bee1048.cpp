#include <stdio.h>

int main()
{
    float s, sn, r, p;
    scanf("%f", &s);
    if(s>=0&&s<=400.00)
    {
        r=s*0.15;
        sn=s+r;
        printf("Novo salario: %.2f\n",sn);
        printf("Reajuste ganho: %.2f\n",r);
        printf("Em percentual: 15 %\n");
    }
    else
    {
        if(s>=400.01&&s<=800.00)
        {
            r=s*0.12;
            sn=s+r;
            printf("Novo salario: %.2f\n",sn);
            printf("Reajuste ganho: %.2f\n",r);
            printf("Em percentual: 12 %\n");
        }
        else
        {
            if(s>=800.01&&s<=1200.00)
            {
                r=s*0.10;
                sn=s+r;
                printf("Novo salario: %.2f\n", sn);
                printf("Reajuste ganho: %.2f\n", r);
                printf("Em percentual: 10 %\n");
            }
            else
            {
                if(s>=1200.01&&s<=2000.00)
                {
                    r=s*0.07;
                    sn=s+r;
                    printf("Novo salario: %.2f\n", sn);
                    printf("Reajuste ganho: %.2f\n", r);
                    printf("Em percentual: 7 %\n");
                }
                else
                {
                    if(s>2000.00)
                    {
                        r=s*0.04;
                        sn=s+r;
                        printf("Novo salario: %.2f\n", sn);
                        printf("Reajuste ganho: %.2f\n", r);
                        printf("Em percentual: 4 %\n");
                    }
                }
            }
        }
    }

return 0;
}
