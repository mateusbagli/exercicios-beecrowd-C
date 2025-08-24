#include <stdio.h>

int main()
{
    int n1, n2;
    n1= 1;
    n2= 0;
    while(n1!=n2)
    {
        scanf("%d", &n1);
        scanf("%d", &n2);
        if (n2!=n1)
            if(n1>n2)
                printf("Decrescente\n"); 
            else
                printf("Crescente\n");
    }  
    return 0;
}
