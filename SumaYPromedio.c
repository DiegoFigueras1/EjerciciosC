/* Escribir un programa que permita al usuario ingresar 6 números enteros, que
pueden ser positivos o negativos. Al finalizar, mostrar la sumatoria de los 
números negativos y el promedio de los positivos. No olvides que no es posible
dividir por cero, por lo que es necesario evitar que el programa arroje un error
si no se ingresaron números positivos. */

#include <stdio.h>

main () {
	
	int num, sum, pos=0, neg, i;

	printf("Ingrese seis numeros a continuacion: ");
	
	for (i=1; i<=6; i++) {

	scanf("%i",&num);
	
	if (num < 0) {
		neg += num; 
	} else if (num > 0) {
		sum+=num;
		pos+=1;
	} 
	}
	
	if (pos>0) {
		printf("El promedio de los positivos es de: %i \n", sum/pos);
	} 
	if (neg!=0) {
		printf ("la sumatoria de los negativos es de: %i \n", neg);
	}
	return 0;
	
}
