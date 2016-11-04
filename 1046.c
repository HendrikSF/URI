#include <stdio.h>

int main ()
{
	int Hi, Hf, aux;

	scanf("%d %d", &Hi, &Hf);

	
	if(Hi < Hf){
		aux = Hf - Hi;
		printf("O JOGO DUROU %d HORA(S)\n", aux);

	}

	if(Hi >= Hf){
		aux = (24 - Hi) + Hf;
		printf("O JOGO DUROU %d HORA(S)\n", aux);



	}

	return 0;


	
}