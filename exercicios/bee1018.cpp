#include <stdio.h>
int main()
{	int n, cem, cinq, vint, dez, cinc, dois, um;
	scanf("%d", &n);
	printf ("%d\n", n);
	cem=n/100;
	n=n%100;
	cinq=n/50;
	n=n%50;
	vint=n/20;
	n=n%20;
	dez=n/10;
	n=n%10;
	cinc=n/5;
	n=n%5;
	dois=n/2;
	n=n%2;
	um=n/1;
    printf ("%d nota(s) de R$ 100,00\n", cem);
    printf ("%d nota(s) de R$ 50,00\n", cinq);
    printf ("%d nota(s) de R$ 20,00\n", vint);
    printf ("%d nota(s) de R$ 10,00\n", dez);
    printf ("%d nota(s) de R$ 5,00\n", cinc);
    printf ("%d nota(s) de R$ 2,00\n", dois);
    printf ("%d nota(s) de R$ 1,00\n", um);
return 0;}
