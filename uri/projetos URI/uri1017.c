#include <stdio.h>

int main () {
	int tempoGasto, velocidade;
	double litros;
	
	scanf("%d", &tempoGasto);
	scanf("%d", &velocidade);
	
	litros=(tempoGasto*velocidade);
	litros/=12;
	
	printf("%.3lf\n", litros);
	return 0;
}
