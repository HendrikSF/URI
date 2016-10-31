#include <stdio.h>

int main ()
{

	int NF, NH;
	double VH, S;

	scanf("%d %d %lf", &NF, &NH, &VH);

	S = NH * VH;

	printf("NUMBER = %d\n", NF);
	printf("SALARY = U$ %.2lf\n", S);

	return 0;


}
