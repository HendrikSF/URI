#include <stdio.h>

int main()
{
	double S, R;

	scanf("%lf", &S);

	if(S >= 0 && S <= 400){
		R = (S/100)*15;
		S = S + R;
		printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15%%\n",S,R);
	}
	else 
		if(S > 400 && S <= 800){
		R = (S/100)*12;
		S = S + R;
		printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12%%\n",S,R);
	}
	else
		if(S > 800 && S <= 1200){
			R = (S/100)*10;
			S = S + R;
			printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10%%\n",S,R);

		}
	else 
		if(S > 1200 && S <= 2000){
			R = (S/100)*7;
			S = S + R;
			printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7%%\n",S,R);

		}
	else 
		if(S > 2000){
			R = (S/100)*7;
			S = S + R;
			printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4%%\n",S,R);

		}

		return 0;
}