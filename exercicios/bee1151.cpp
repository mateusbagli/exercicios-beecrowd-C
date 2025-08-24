#include <stdio.h>

int main()
{
    int n, n1 = 0, n2 = 1, i = 1, n3;
    
    scanf("%d", &n);
	printf("%d", n1);
	if (n > 1) 
        printf(" %d", n2);
	while (i < n - 1) 
	{
        n3 = n1 + n2;
        printf(" %d", n3);
        n1 = n2;
        n2 = n3;
        i++;
    }

    printf("\n");
    
    return 0;
}
