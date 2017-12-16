#include <stdio.h>
#include <stdlib.h>

int main () {
	int codPeca1, numeroPeca1;
	int codPeca2, numeroPeca2;
	double valorUni1, valorUni2, valorPagar;

	
	scanf("%i %i %lf", &codPeca1, &numeroPeca1, &valorUni1);
	scanf("%i %i %lf", &codPeca2, &numeroPeca2, &valorUni2);
	
	valorPagar=((valorUni1*numeroPeca1)+(valorUni2*numeroPeca2));
	
	printf("VALOR A PAGAR: R$ %.2lf\n", valorPagar);
	
	system ("pause");
	return 0;
}
