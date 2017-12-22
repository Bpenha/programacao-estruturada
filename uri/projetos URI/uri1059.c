#include <stdio.h>


int main () {
	int par;
	
	for(par=1; par<=100; par++){
		if(par%2==0){
			printf("%d\n", par);
		}
	}
	return 0;
	
}
