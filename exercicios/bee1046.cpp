#include <stdio.h>
int main()
{	int i, t, h;
	scanf("%d%d",&i,&t);
	if(i==t)
		printf("O JOGO DUROU 24 HORA(S)\n");
	else
	{	
		if(i<t)
		{
			h= t-i;
			printf("O JOGO DUROU %d HORA(S)\n", h);
		}
		else
		{
			h=24-i+t;
			printf("O JOGO DUROU %d HORA(S)\n",h );
		}
	}
return 0;
}

