#include <stdio.h>

int main () {
	int num, total=0, ultnum;
	printf("Ingrese un numero para sumar sus digitos: ");
	scanf("%i", &num);
	
	do {
		ultnum=num%10;
		total+=ultnum;
		num /= 10;
	} while (num!=0);
	
	printf("suma de los digitos: %i", total);
	
	
}
