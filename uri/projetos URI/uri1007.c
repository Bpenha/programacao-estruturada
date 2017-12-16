#include <stdio.h>
#include <stdlib.h>

int main () {
	int a;
	int b;
	int c;
	int d;
	int diferenca;
	
	scanf("%i", &a);
	scanf("%i", &b);
	scanf("%i", &c);
	scanf("%i", &d);
	
	diferenca = ((a*b)- (c*d));
	
	printf("DIFERENCA = %i\n", diferenca);
}
