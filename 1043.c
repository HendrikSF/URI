#include <stdio.h>

int main()
{
	double a, b, c, perm, area;
	scanf("%lf %lf %lf", &a, &b, &c);
	
	if(a+b>c && b+c>a && a+c>b){
		perm = a + b + c;
		printf("Perimetro = %.1lf\n", perm);
	}
		else{
			area = .5 * (a+b) *c;
			printf("Area = %.1lf\n",area);
		}

	return 0;

}