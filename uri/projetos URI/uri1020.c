#include <stdio.h>

int main () {
	int idade,dia, mes, ano, rest;
	
	scanf("%d", &idade);
	
	ano=idade/365;
	rest=idade%365;
	mes=rest/30;
	dia=rest%30;
	
	printf("%d ano(s)\n", ano);
	printf("%d mes(es)\n", mes);
	printf("%d dia(s)\n", dia);
	
	return 0;
	
}
