#include <stdio.h>
int main() 
{
    int t, n, i, primo;
    scanf("%d", &t);
    while (t > 0) 
	{
        scanf("%d", &n);
        primo = 1;
        if (n < 2) 
            primo = 0;
        else 
		{
            i = 2;
            while (i < n) 
			{
                if (n % i == 0) 
                    primo = 0;
                i++;
            }
        }
        if (primo == 1)
            printf("%d eh primo\n", n);
   		else 
            printf("%d nao eh primo\n", n);
        t--;
    }
    
    return 0;
}
