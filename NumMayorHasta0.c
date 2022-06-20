#include <stdio.h>

int main () {
	
	int x, mayor=0;
	
	do {
		printf("introduzca un numero: ");
		scanf("%i", &x);
	
		if (x>mayor) {
			mayor = x;
		}
		
	} while (x!=0);
	
	printf("El numero mayor fue: %i", mayor);
	
	return 0;
}
