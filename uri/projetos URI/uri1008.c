#include <stdio.h>

int main () {
	int numero;
	int hora;
	double valorPorHora;
	double salario;

	
	scanf("%i", &numero);
	scanf("%i", &hora);
	scanf("%lf", &valorPorHora);
	
	salario=hora*valorPorHora;
	
	printf("NUMBER = %i\n", numero);
	printf("SALARY = U$ %.2lf\n", salario);
	
	return 0;
}
