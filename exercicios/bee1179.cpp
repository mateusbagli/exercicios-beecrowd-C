#include <stdio.h>
#define tf 5
int main()
{
    int i, j, tlp, tli, n, vetp[tf], veti[tf]; 
    tlp = tli = 0;
    for(i=0;i<tf*3; i++)
    {
        scanf("%d", &n);
        if(n%2==0)
        {
            
            vetp[tlp] = n;
            tlp++;
            if(tlp==tf)
            {
                for(j=0; j<tf; j++)
                    printf("par[%d] = %d\n", j, vetp[j]);
                tlp=0;
            }
            
        }
        else
        {
            veti[tli] = n;
            tli++;
            if(tli==tf)
            {
                for(j=0; j<tf; j++)
                    printf("impar[%d] = %d\n", j, veti[j]);
                tli=0;
            }
        }
    }
    if(tli>0)
        for(j=0; j<tli; j++)
            printf("impar[%d] = %d\n", j, veti[j]);
    if(tlp>0)
        for(j=0; j<tlp; j++)
            printf("par[%d] = %d\n", j, vetp[j]);
    
    return 0;
}
