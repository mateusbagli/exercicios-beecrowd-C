#include <stdio.h>
int main()
{	
	float n;
	int c, cem, cinq, vint, dez, cinc, dois, um, c50, c25, c10, c5, c1;
	scanf("%f", &n);
	c=n*100;
	cem=c/10000;
	c=c%10000;
	cinq=c/5000;
	c=c%5000;
	vint=c/2000;
	c=c%2000;
	dez=c/1000;
	c=c%1000;
	cinc=c/500;
	c=c%500;
	dois=c/200;
	c=c%200;
	um = c/100;
	c=c%100;
	c50=c/50;
	c=c%50;
	c25=c/25;
	c=c%25;
	c10=c/10;
	c=c%10;
	c5=c/5;
	c=c%5;
	c1=c/1;
	printf("NOTAS:\n");
    printf ("%d nota(s) de R$ 100.00\n", cem);
    printf ("%d nota(s) de R$ 50.00\n", cinq);
    printf ("%d nota(s) de R$ 20.00\n", vint);
    printf ("%d nota(s) de R$ 10.00\n", dez);
    printf ("%d nota(s) de R$ 5.00\n", cinc);
    printf ("%d nota(s) de R$ 2.00\n", dois);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n",um);
	printf("%d moeda(s) de R$ 0.50\n",c50);
	printf("%d moeda(s) de R$ 0.25\n",c25);
	printf("%d moeda(s) de R$ 0.10\n",c10);
	printf("%d moeda(s) de R$ 0.05\n",c5);
	printf("%d moeda(s) de R$ 0.01\n",c1);
return 0;
}

