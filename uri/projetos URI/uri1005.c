#include <stdio.h>
#include <stdlib.h>

int main () {
	double n1;
	double n2;
	double media;
	
	scanf("%lf", &n1);
	scanf("%lf", &n2);
	
	media=((n1*3.5)+(n2*7.5))/11;
	
	printf("MEDIA = %.5lf\n", media);
}
