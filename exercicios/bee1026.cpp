#define tf 32
#include <stdio.h>
#include <math.h>
int main()
{
    int  i, j, pot, bin1[tf], bin2[tf], bin3[tf];
    unsigned int n1, n2, resu;
    while((scanf("%u%u", &n1, &n2))==2)
    {
        for(i=tf-1; i>=0; i--)
        {
            if(n1>=1)
          {
                bin1[i] = n1%2;
                n1/= 2;
           }
            else
                bin1[i] = 0;
        }
        for(i=tf-1; i>=0; i--)
        {
           if(n2>=1)
           {
               bin2[i] = n2%2;
               n2/= 2;
           }
            else
                bin2[i] = 0;
        }
        for(i= tf-1; i>=0; i--)
        {
            if(bin1[i] == 1 && bin2[i] == 1 ||bin1[i] == 0 && bin2[i] == 0)
                bin3[i] = 0;
            if(bin1[i] == 1 && bin2[i] == 0 || bin1[i] == 0 && bin2[i] == 1)
                bin3[i] = 1;
        }
        for(i=tf-1,pot=0, resu = 0; i>=0; i--, pot++)
        {
            if(bin3[i] == 1)
                resu+= pow(2,pot);
        }
        printf("%u\n",resu);
    }
    

    return 0;
}
