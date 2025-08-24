#include <stdio.h>
int main()
{
    int n1, n2, n3,  maior, menor, meio;
    scanf("%d%d%d", &n1,&n2,&n3);
    if(n1>n2&&n1>n3)
        maior=n1;
    else
        if(n2>n1&&n2>n3)
            maior=n2;
        else
            if(n3>n1&&n3>n2)
                maior=n3;
     if(n1<n2&&n1<n3)
        menor=n1;
    else
        if(n2<n1&&n2<n3)
            menor=n2;
        else
            if(n3<n1&&n3<n2)
                menor=n3;
    if(maior==n1&&menor==n2||maior==n2&&menor==n1)
        meio=n3;
    if(maior==n1&&menor==n3||maior==n3&&menor==n1)
        meio=n2;
    if(maior==n2&&menor==n3||maior==n3&&menor==n2)
        meio=n1;
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",menor, meio, maior, n1, n2, n3);

    return 0;
}
