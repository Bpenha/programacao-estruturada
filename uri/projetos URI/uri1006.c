#include <stdio.h>
#include <stdlib.h>

int main () {
	double n1;
	double n2;
	double n3;
	double media;
	
	scanf("%lf", &n1);
	scanf("%lf", &n2);
	scanf("%lf", &n3);
	
	media = ((n1*2)+(n2*3)+(n3*5))/10;
	
	printf("MEDIA = %.1lf\n", media);
}
