/*Escribir un programa que muestre la sumatoria de todos los numeros entre el 0 y el 100*/

#include <stdio.h>

int main() {
	int i=1, suma= 0;
	
	printf("Sumatoria de 0 a 100: \n\n");
	
	do {
		
		suma += i;
		i+=1;
		
		printf("%i\n", suma );
		
		
	} while (i<=100);
	
	return 0;
	
}
