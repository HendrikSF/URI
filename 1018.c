#include <stdio.h>

int main ()
{
	int X;

	scanf("%d", &X);
	printf("%d\n",X);

	int Y = (X - (X%100))/100;
		printf("%d nota(s) de R$ 100,00\n", Y);
		X = X%100;

	Y = (X - (X%50))/50;
		printf("%d nota(s) de R$ 50,00\n", Y);
		X = X%50;

	Y = (X - (X%20))/20;
		printf("%d nota(s) de R$ 20,00\n", Y);
		X = X%20;
    
    Y = (X - (X%10))/10;
    	printf("%d nota(s) de R$ 10,00\n", Y);
    	X = X%10;

    Y = (X - (X%5))/5;
    	printf("%d nota(s) de R$ 5,00\n", Y);
    	X = X%5;

    Y = (X - (X%2))/2;
    	printf("%d nota(s) de R$ 2,00\n", Y);
    	X = X%2;

    Y = (X - (X%1))/1;
    	printf("%d nota(s) de R$ 1,00\n", Y);
    	


		return 0;
}
