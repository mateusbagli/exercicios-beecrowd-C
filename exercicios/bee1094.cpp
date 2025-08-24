#include <stdio.h>

int main()
{
    char l;
    int t, n, n2, q, tc, tr, ts;
    float pc, pr, ps;
    scanf("%d", &n);
    n2=1;
    tc=0;
    tr=0;
    ts=0;
    while (n2<=n)
    {
        scanf("%d ", &q);
        scanf("%c", &l);
        if(l=='C')
            tc= tc+q;
        else
            if(l=='R')
                tr=tr+q;
            else
                if(l=='S')
                    ts=ts+q;
        n2=n2+1;
    }
    t= tc+tr+ts;
    pc=tc*100.0/t;
    pr=tr*100.0/t;
    ps=ts*100.0/t;
    printf("Total: %d cobaias\n", t);
    printf("Total de coelhos: %d\n", tc);
    printf("Total de ratos: %d\n", tr);
    printf("Total de sapos: %d\n", ts);
    printf("Percentual de coelhos: %.2f %\n", pc);
    printf("Percentual de ratos: %.2f %\n", pr);
    printf("Percentual de sapos: %.2f %\n", ps);

    return 0;
}
