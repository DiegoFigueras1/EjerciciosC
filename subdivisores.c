/*28. Escribir un programa que, dado un número por el usuario, muestre todos susdivisores positivos. 
Recordar que un divisor es aquel que divide al número deforma exacta (con resto 0). */

#include <stdio.h>
#include <math.h>
int main() {
	
	int num, i=0;
	printf("Introduzca un numero: ");
	scanf("%i", &num);

	
	do {
		
		i+=1;
		
		if (num%i==0) {
			printf("%i \n", i);
		}
		
	} while (i<=num);	
	
}
