 /*Escribir un programa que permita saber si un a�o es bisiesto. Para que un a�o
sea bisiesto debe ser divisible por 4 y no debe ser divisible por 100, excepto
que tambi�n sea divisible por 400. */

#include <stdio.h>
 #include <math.h>

main () {
	int anio;
	printf("Introduzca el anio: ");
	scanf("%i", &anio);	
	
	if (anio %4 == 0 && anio%100!=0 || anio%400==0 ) {
		printf("el anio %i es bisiesto. ", anio);	
	}
		 else {
		printf("el anio %i no es bisiesto. ", anio);
	}
	
	return 0;
}
