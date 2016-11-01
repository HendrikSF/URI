#include <stdio.h>

int main()
{
    int C, Q;
    double V;
    
    scanf("%d %d", &C, &Q);

    switch(C){

        case 1:
            V = Q * 4.00;
            printf("Total: R$ %.2lf\n", V);
            break;

        case 2: 
            V = Q * 4.50;
            printf("Total: R$ %.2lf\n", V);
            break;

        case 3:
            V = Q * 5.00;
            printf("Total: R$ %.2lf\n", V);
            break;

        case 4:
            V = Q * 2.00;
            printf("Total: R$ %.2lf\n", V);
            break;

        case 5:
            V = Q * 1.50;
            printf("Total: R$ %.2lf\n", V);
            break;
            

    }

    return 0;

}
