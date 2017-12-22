#include<stdio.h>

int main(){
	int x, num, fat;
	
	for(num=1; num<=10; num++){
		fat=1;
		for(x=1; x<=num; x++){
			fat*=x;
		}
		printf("o fatorial de %d eh:%d\n", num, fat);
	}
	return 0;
} 
