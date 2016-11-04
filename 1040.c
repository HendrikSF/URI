#include <stdio.h>

int main ()
{
	double A, B, C, D, M, aux;

	scanf("%lf %lf %lf %lf", &A, &B, &C, &D);

	M = ((A*2)+(B*3)+(C*4)+(D*1))/10;
	
	printf("Media: %.1lf\n", M);

	if(M >= 7){
		printf("Aluno aprovado.\n");
	}
	else
		if(M<5){
			printf("Aluno reprovado.\n");
		}
	else
		if(M>=5 && M<=6.9){
			printf("Aluno em exame\n");
			double N;
			scanf("%lf", &N);
			printf("Nota do exame: %.1lf\n",N);
			aux = (N + M)/2;

		if(aux >= 5){
			printf("Aluno aprovado.\n");
		} 
		else
			if(aux <= 4.9){
				printf("Aluno reprovado.\n");
			}
			printf("Media Final: %.1lf\n", aux);
		}

		

return 0;

}